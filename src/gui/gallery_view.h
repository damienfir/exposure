#ifndef GALLERY_VIEW_H
#define GALLERY_VIEW_H

#include <gtkmm.h>
#include <vector>

#include "models/collection.h"
#include "handlers/handler.h"


class GalleryView: public Gtk::FlowBox
{
public:
    GalleryView (Gtk::Container*);
    virtual ~GalleryView ();

    void update_items(Collection*);

protected:
    void set_signals();

    Gtk::Container* _parent;
    Gtk::ScrolledWindow* _scrolled;
    Handler* _handler;
};

#endif /* GALLERY_VIEW_H */
