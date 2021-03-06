#ifndef IMAGE_IO_H
#define IMAGE_IO_H

#include <stdint.h>
#include <stdio.h>

#include "models/image.h"


class ImageIO
{
public:
    ImageIO();
    virtual ~ImageIO();

    void load();
    void read_ppm(FILE*);
    void read_jpeg(FILE*);
    void read_exif();
    void write_bmp();

    bool is_ppm(FILE*);

private:
    const char* _filename;
    uint8_t* _data;
    int _width;
    int _height;
    int _channels;
    int _max_value;
};

#endif /* IMAGE_IO_H */
