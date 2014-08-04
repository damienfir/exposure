#ifndef GALLERY_CONTROLLER_H
#define GALLERY_CONTROLLER_H

#include "ctrl/controller.h"
#include "models/collection.h"
#include "gui/gallery_view.h"


class GalleryController: public Controller
{
public:
    GalleryController (GalleryView*);
    virtual ~GalleryController ();

    void set_collection(Collection*);
    void realize();

private:
    Collection* _collection;
    GalleryView* _gallery;

    void set_signals();
};

#endif /* GALLERY_CONTROLLER_H */
