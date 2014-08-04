#include "gui/window.h"
#include "models/library.h"

#include <iostream>


int main(int argc, char *argv[])
{
    Library lib;
    lib.load();

    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "");
    Window window;
    return app->run(window);
}
