#include "window.h"

#include "gallery_view.h"


Window::Window()
{
    set_title("exposure");

    GalleryView* gallery = Gtk::manage(new GalleryView((Gtk::Container*)this));

    show_all_children();
}

Window::~Window()
{}


void Window::on_quit()
{
    hide();
}
