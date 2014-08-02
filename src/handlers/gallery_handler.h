#include "models/collection.h"
#include "gui/gallery_view.h"


class GalleryHandler
{
public:
    GalleryHandler (GalleryView*);
    virtual ~GalleryHandler ();

private:
    Collection* _collection;
    GalleryView* _gallery;
};
