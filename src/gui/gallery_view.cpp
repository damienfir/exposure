#include "gallery_view.h"

#include <iostream>
#include "image_area.h"

#include "image/image_io.h"


using namespace std;

GalleryView::GalleryView(Gtk::Container* parent):
    _parent(parent)
{

    _scrolled = Gtk::manage(new Gtk::ScrolledWindow());    
    _scrolled->add(*this);

    _parent->add(*_scrolled);

    update_items();
}


GalleryView::~GalleryView()
{
    delete _collection;
}


void GalleryView::set_collection(Collection* collection)
{
    _collection = collection;
}


void GalleryView::update_items()
{
    for (int i = 0; i < _collection->size(); ++i)
    {
        ImageArea* area = Gtk::manage(new ImageArea(this));
        area->set_image(_collection->at(i));
    }
}
