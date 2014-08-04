#include "gallery_view.h"

#include "ctrl/gallery_controller.h"
#include "gui/image_area.h"

#include "models/image.h"

#include <iostream>


GalleryView::GalleryView(Gtk::Container* parent):
    _parent(parent)
{
    GalleryController* controller = new GalleryController(this);
    register_subscriber();

    _scrolled = Gtk::manage(new Gtk::ScrolledWindow());    
    _scrolled->add(*this);
    _parent->add(*_scrolled);
}


GalleryView::~GalleryView() { }


void GalleryView::on_notify(Notification* notification)
{
    std::cout << "base notification from view" << std::endl;
}

void GalleryView::on_notify(CollectionChangedNotification* notification)
{
    std::cout << "collection changed notification" << std::endl;
    /* update_items(notification->get_source()); */
}


void GalleryView::update_items(Collection* collection)
{
    /* std::cout << collection->size() << std::endl; */
    for (int i = 0; i < collection->size(); ++i)
    {
        /* ImageArea* area = Gtk::manage(new ImageArea(this)); */
        /* Image* im = collection->at(i); */
        /* area->set_image(im); */
    }
}
