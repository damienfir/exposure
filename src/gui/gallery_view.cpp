#include "gallery_view.h"

#include "handlers/gallery_handler.h"
#include "gui/image_area.h"


GalleryView::GalleryView(Gtk::Container* parent):
    _parent(parent)
{
    _scrolled = Gtk::manage(new Gtk::ScrolledWindow());    
    _scrolled->add(*this);
    _parent->add(*_scrolled);

    _handler = new GalleryHandler(this);
    _handler->show();
    /* set_signals(); */
}


GalleryView::~GalleryView()
{
}


void GalleryView::set_signals()
{
    /* signal_show().connect(sigc::mem_fun(*_handler, &GalleryHandler::show)); */
}


void GalleryView::update_items(Collection* collection)
{
    for (int i = 0; i < collection->size(); ++i)
    {
        ImageArea* area = Gtk::manage(new ImageArea(this));
        area->set_image(collection->at(i));
    }
}
