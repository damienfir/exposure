#ifndef WINDOW_H
#define WINDOW_H

#include <gtkmm.h>


class Window: public Gtk::Window
{
public:
    Window();
    virtual ~Window();

    void on_quit();

private:

};

#endif /* WINDOW_H */
