#include "selection_view.h"

#include "ctrl/selection_controller.h"

#include <iostream>


SelectionView::SelectionView(Gtk::Container* parent):
    _parent(parent)
{
    SelectionController* controller = new SelectionController(this);

    Gtk::Button* import_btn = Gtk::manage(new Gtk::Button("import folder"));
    this->pack_start(*import_btn, Gtk::PACK_SHRINK);
    _parent->add(*this);
}


SelectionView::~SelectionView()
{
}
