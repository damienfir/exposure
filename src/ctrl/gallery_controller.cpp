#include "gallery_controller.h"

#include <iostream>


GalleryController::GalleryController(GalleryView* gallery):
    _gallery(gallery)
{
    set_signals();
}


GalleryController::~GalleryController()
{
}


void GalleryController::set_signals()
{
    _gallery->signal_realize().connect(
            sigc::mem_fun(*this, &GalleryController::realize)
    );
}


void GalleryController::realize()
{
    std::cout << "show gallery" << std::endl;
}
