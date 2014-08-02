#ifndef GALLERY_VIEW_H
#define GALLERY_VIEW_H

#include <gtkmm.h>
#include <vector>

#include "models/collection.h"


class GalleryView: public Gtk::FlowBox
{
public:
    GalleryView (Gtk::Container*);
    virtual ~GalleryView ();

    void set_collection(Collection*);
    void update_items();

private:
    Gtk::Container* _parent;
    Gtk::ScrolledWindow* _scrolled;
    Collection* _collection;
};

#endif /* GALLERY_VIEW_H */
