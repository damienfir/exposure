#include "window.h"

#include "gallery_view.h"
#include "selection_view.h"


Window::Window()
{
    set_title("exposure");

    Gtk::Paned* paned = Gtk::manage(new Gtk::Paned(Gtk::ORIENTATION_HORIZONTAL));
    Gtk::Alignment* align1 = Gtk::manage(new Gtk::Alignment());
    Gtk::Alignment* align2 = Gtk::manage(new Gtk::Alignment());

    SelectionView* selection = Gtk::manage(new SelectionView((Gtk::Container*)align1));
    GalleryView* gallery = Gtk::manage(new GalleryView((Gtk::Container*)align2));

    paned->add1(*align1);
    paned->add2(*align2);
    add(*paned);
    show_all_children();
}

Window::~Window()
{}


void Window::on_quit()
{
    hide();
}
