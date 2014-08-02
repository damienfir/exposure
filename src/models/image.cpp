#include <cstdlib>
#include <iostream>

#include "image.h"


using namespace std;


Image::Image(const char* filename):
    fipImage(), _filename(filename)
{
    load(_filename);
}


Image::~Image()
{
    clear();
}
