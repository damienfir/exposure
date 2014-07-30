#include "gui/window.h"
/* #include "image.h" */
/* #include "image_filter.h" */


int main(int argc, char *argv[])
{
    /* Image im("IMG_5398.CR2"); */
    /* im.load(); */
    /* im.load_thumb(); */
    
    /* ImageFilter imfilter; */
    /* imfilter.blur(); */

    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "");

    Window window;

    return app->run(window);
} 
