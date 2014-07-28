#include <gtk/gtk.h>

class GUI
{
public:
    GUI ();
    virtual ~GUI ();

    int build();
    void run();

private:
    GtkWidget* _window;
};
