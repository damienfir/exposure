#ifndef SELECTION_VIEW_H
#define SELECTION_VIEW_H

#include <gtkmm.h>


class SelectionView: public Gtk::Container
{
public:
    SelectionView(Gtk::Container*);
    virtual ~SelectionView ();

private:
    Gtk::Container* _parent;
};

#endif /* SELECTION_VIEW_H */
