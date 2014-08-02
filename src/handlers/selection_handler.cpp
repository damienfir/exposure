#include "selection_handler.h"

#include "handlers/gallery_handler.h"


SelectionHandler::SelectionHandler(SelectionView* selection):
    _selection(selection)
{
    _library = Library::get_instance();

    GalleryHandler* gallery_handler = GalleryHandler::get_instance();
    gallery_handler->set_collection(_library->get_collection(0));
}


SelectionHandler::~SelectionHandler()
{
}


void SelectionHandler::show()
{
}
