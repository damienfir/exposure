#include "selection_controller.h"

#include "ctrl/gallery_controller.h"

#include <iostream>


SelectionController::SelectionController(SelectionView* selection):
    _selection(selection)
{
    _library = Library::get_instance();
    set_signals();
}


SelectionController::~SelectionController()
{
}


void SelectionController::set_signals()
{
    _selection->signal_realize().connect(
            sigc::mem_fun(*this, &SelectionController::realize)
    );
}


void SelectionController::realize()
{
    std::cout << "show selection" << std::endl;
    _library->change_collection(0);
}


void SelectionController::change_collection()
{
    /* _gallery_controller->set_collection(_library->get_collection(0)); */
}
