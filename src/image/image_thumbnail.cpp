#include "image_thumbnail.h"



ImageThumbnail::ImageThumbnail(uint8_t* data, int width, int height, int channels):
    Image(data, width, height, channels)
{
}

ImageThumbnail::~ImageThumbnail()
{
}
