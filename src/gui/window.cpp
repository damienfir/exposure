#include "window.h"

#include "gallery_view.h"

#include "collection.h"
#include "image/image_thumbnail.h"
#include "image/image_io.h"


Window::Window()
{
    GalleryView* gallery = Gtk::manage(new GalleryView(this));

    Collection col;
    for (int i = 0; i < 1; ++i)
    {
        ImageThumbnail* im = ImageIO::load_thumb("media/IMG_5398.thumb.jpg");
        col.push_back(im);
    }
    gallery->add_items(col);
}

Window::~Window()
{}


void Window::on_quit()
{
    hide();
}
