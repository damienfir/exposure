#include "gallery_view.h"

#include "image_area.h"


GalleryView::GalleryView(Gtk::Window* win):
    _parent(win)
{
    _parent->add(*this);
}


void GalleryView::add_items(Collection collection)
{
    for (int i = 0; i < collection.size(); ++i)
    {
        ImageArea* area = Gtk::manage(new ImageArea());
        area->set_image(collection[i]);
    }
}


GalleryView::~GalleryView()
{
}
