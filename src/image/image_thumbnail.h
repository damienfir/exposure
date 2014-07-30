#ifndef IMAGE_THUMBNAIL_H
#define IMAGE_THUMBNAIL_H

#include "image.h"

class ImageThumbnail: public Image
{
public:
    ImageThumbnail(uint8_t* data, int width, int height, int channels);
    virtual ~ImageThumbnail();

private:
};

#endif /* IMAGE_THUMBNAIL_H */
