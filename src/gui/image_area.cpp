#include "image_area.h"

#include <cairomm/context.h>
#include <gdkmm/general.h>
#include <glibmm/fileutils.h>
#include <iostream>


ImageArea::ImageArea(): Gtk::DrawingArea()
{
}


ImageArea::~ImageArea()
{
}


void ImageArea::set_image(Image* image)
{
    try {
        _pixbuf = Gdk::Pixbuf::create_from_data(image->get_data(), Gdk::COLORSPACE_RGB, false, 8, image->width, image->height, 1);
    }
    catch(const Gdk::PixbufError& ex) {
        std::cerr << "PixbufError: " << ex.what() << std::endl;
    }
}


bool ImageArea::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
    Gdk::Cairo::set_source_pixbuf(cr, _pixbuf, 0, 0);
    cr->paint(); 
    return true;
}
