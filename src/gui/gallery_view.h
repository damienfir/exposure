#ifndef GALLERY_VIEW_H
#define GALLERY_VIEW_H

#include <gtkmm.h>
#include <vector>

#include "models/collection.h"

#include "notifications.h"


class GalleryView: public Gtk::FlowBox, public Subscriber
{
public:
    GalleryView (Gtk::Container*);
    virtual ~GalleryView ();

    void update_items(Collection*);
    void on_notify(Notification*);
    void on_notify(CollectionChangedNotification*);

protected:
    Gtk::Container* _parent;
    Gtk::ScrolledWindow* _scrolled;
};

#endif /* GALLERY_VIEW_H */
