#ifndef SELECTION_VIEW_H
#define SELECTION_VIEW_H

#include <gtkmm.h>


class SelectionView: public Gtk::VBox
{
public:
    SelectionView(Gtk::Container*);
    virtual ~SelectionView ();

private:
    Gtk::Container* _parent;
    Gtk::VBox* _vbox;
};

#endif /* SELECTION_VIEW_H */
