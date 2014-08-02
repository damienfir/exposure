#include "selection_view.h"

#include "handlers/selection_handler.h"


SelectionView::SelectionView(Gtk::Container* parent):
    _parent(parent)
{
    Gtk::VBox* vbox = Gtk::manage(new Gtk::VBox());
    Gtk::Button* import_btn = Gtk::manage(new Gtk::Button("import folder"));
    vbox->pack_start(*import_btn, Gtk::PACK_SHRINK);
    _parent->add(*vbox);

    _handler = new SelectionHandler(this);
}


SelectionView::~SelectionView()
{
}
