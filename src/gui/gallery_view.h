#ifndef GALLERY_VIEW_H
#define GALLERY_VIEW_H

#include <gtkmm.h>
#include <vector>

#include "collection.h"


class GalleryView: public Gtk::FlowBox
{
public:
    GalleryView (Gtk::Window*);
    virtual ~GalleryView ();

    void add_items(Collection);

private:
    Gtk::Window* _parent;
};

#endif /* GALLERY_VIEW_H */
