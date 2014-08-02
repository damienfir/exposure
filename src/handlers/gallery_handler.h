#ifndef GALLERY_HANDLER_H
#define GALLERY_HANDLER_H

#include "handlers/handler.h"
#include "models/collection.h"
#include "gui/gallery_view.h"


class GalleryHandler: public Handler
{
public:
    GalleryHandler (GalleryView*);
    virtual ~GalleryHandler ();
    static GalleryHandler* get_instance();

    void set_collection(Collection*);
    void show();

private:
    Collection* _collection;
    GalleryView* _gallery;

    static GalleryHandler* _instance;
};

#endif /* GALLERY_HANDLER_H */
