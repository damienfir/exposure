#include "image_area.h"

#include <cairomm/context.h>
#include <gdkmm/general.h>
#include <glibmm/fileutils.h>
#include <iostream>


ImageArea::ImageArea(Gtk::Container* parent):
    Gtk::DrawingArea(), _parent(parent)
{
    /* _frame = Gtk::manage(new Gtk::AspectFrame("")); */
    /* _frame->add(*this); */
    /* _parent->add(*_frame); */
    _parent->add(*this);
}


ImageArea::~ImageArea()
{
}


void ImageArea::set_image(Image* image)
{
    try {
        int row_stride = image->width * 3;
        _pixbuf = Gdk::Pixbuf::create_from_data(image->get_data(), Gdk::COLORSPACE_RGB, false, 8, image->width, image->height, row_stride);
    }
    catch(const Gdk::PixbufError& ex) {
        std::cerr << "PixbufError: " << ex.what() << std::endl;
    }
    set_size_request(100,100);
}


bool ImageArea::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
    Gtk::Allocation allocation = get_allocation();
    int width = allocation.get_width();
    int height = allocation.get_height();

    Gdk::Cairo::set_source_pixbuf(cr, _pixbuf, (width - _pixbuf->get_width())/2, (height - _pixbuf->get_height())/2);
    cr->paint(); 
    return true;
}
