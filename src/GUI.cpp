#include "GUI.h"


GUI::GUI()
{ }


GUI::~GUI()
{ }


int GUI::build()
{
    GtkBuilder* builder = gtk_builder_new();

    GError* error = NULL;
    if(!gtk_builder_add_from_file( builder, "gui/test.glade", &error ) )
    {
        g_warning( "%s", error->message );
        g_free( error );
        return 1;
    }

    _window = GTK_WIDGET(gtk_builder_get_object( builder, "window1"));

    gtk_builder_connect_signals( builder, NULL );
    g_object_unref(G_OBJECT(builder));

    return 0;
}

void GUI::run()
{
    gtk_widget_show(_window);
    gtk_main();
}
