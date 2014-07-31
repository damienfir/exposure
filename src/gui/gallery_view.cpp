#include "gallery_view.h"

#include <iostream>
#include "image_area.h"
#include "image/image_thumbnail.h"
#include "image/image_io.h"


using namespace std;

GalleryView::GalleryView(Gtk::Container* parent):
    _parent(parent)
{
    for (int i = 0; i < 10; ++i)
    {
        cout << "loading image " << i << endl;
        ImageThumbnail* im = ImageIO::load_thumb("media/IMG_5398.thumb.jpg");
        _collection.push_back(im);
    }

    _scrolled = Gtk::manage(new Gtk::ScrolledWindow());    
    _scrolled->add(*this);

    _parent->add(*_scrolled);

    update_items();
}


GalleryView::~GalleryView()
{
}


void GalleryView::update_items()
{
    for (int i = 0; i < _collection.size(); ++i)
    {
        ImageArea* area = Gtk::manage(new ImageArea(this));
        area->set_image(_collection[i]);
    }
    /* Gtk::Button* btn = Gtk::manage(new Gtk::Button("asfd")); */
    /* add(*btn); */
}
