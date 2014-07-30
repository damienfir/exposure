#ifndef IMAGE_AREA_H
#define IMAGE_AREA_H

#include <gtkmm.h>

#include "image/image.h"


class ImageArea: public Gtk::DrawingArea
{
public:
    ImageArea();
    virtual ~ImageArea();

    void set_image(Image*);
    Glib::RefPtr<Gdk::Pixbuf> _pixbuf;

protected:
    virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);
    Glib::RefPtr<Gtk::Builder> builder;
};

#endif /* IMAGE_AREA_H */