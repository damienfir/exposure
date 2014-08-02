#include "gallery_handler.h"


GalleryHandler* GalleryHandler::_instance = NULL;


GalleryHandler::GalleryHandler(GalleryView* gallery):
    _gallery(gallery)
{
    _instance = this;
}


GalleryHandler::~GalleryHandler()
{
}


GalleryHandler* GalleryHandler::get_instance()
{
    return _instance;
}


void GalleryHandler::set_collection(Collection* collection)
{
    _collection = collection;
    _collection->load_images();
}


void GalleryHandler::show()
{
    _gallery->update_items(_collection);
}
