#include <cstdlib>
#include <iostream>

#include "image.h"


using namespace std;


Image::Image()
{}

Image::Image(uint8_t* data, int w, int h, int c):
    _data(data), width(w), height(h), channels(c)
{}


Image::~Image()
{
    free(_data);
}


int Image::get_size()
{
    return width * height * channels;
}

uint8_t* Image::get_data()
{
    return _data;    
}
