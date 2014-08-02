#include "gallery_view.h"

#include <iostream>
#include "image_area.h"


GalleryView::GalleryView(Gtk::Container* parent):
    _parent(parent)
{
    _scrolled = Gtk::manage(new Gtk::ScrolledWindow());    
    _scrolled->add(*this);

    _parent->add(*_scrolled);

    _handler = new GalleryHandler(this);
}


GalleryView::~GalleryView()
{
    delete _collection;
}


void GalleryView::set_signals()
{
    signal_show().connect(sigc::mem_fun(_handler, &GalleryHandler::show));
}


void GalleryView::set_collection(Collection* collection)
{
    _collection = collection;
    _collection->load_images();
}


void GalleryView::update_items()
{
    for (int i = 0; i < _collection->size(); ++i)
    {
        ImageArea* area = Gtk::manage(new ImageArea(this));
        area->set_image(_collection->at(i));
    }
}
