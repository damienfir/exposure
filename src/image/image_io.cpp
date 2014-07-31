#include "image_io.h"

#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb/stb_image_write.h"

#include <libexif/exif-data.h>


using namespace std;


ImageIO::ImageIO()
{}


ImageIO::~ImageIO()
{
}


void ImageIO::load()
{
    char cmd[256];
    sprintf(cmd, "./lib/dcraw/dcraw -c %s", _filename);
    FILE* dcraw = popen(cmd, "r");
    read_ppm(dcraw);
}


ImageThumbnail* ImageIO::load_thumb(const char* filename)
{
    int w,h,c;
    uint8_t* data = stbi_load(filename, &w, &h, &c, 0);

    if (!data) {
        cout << "error loading image" << endl;
    }

    ImageThumbnail* im = new ImageThumbnail(data, w, h, c);
    return im;

    /* char cmd[256]; */
    /* sprintf(cmd, "./lib/dcraw/dcraw -e -c %s", _filename); */
    /* FILE* dcraw = popen(cmd, "r"); */
    /* read_jpeg(dcraw); */
}


void ImageIO::read_ppm(FILE* fd)
{
    fscanf(fd, "%s"); // P6
    if (fscanf(fd, "%d %d", &_width, &_height) != 2) {
        cout << "error reading image size" << endl;
    }

    if (fscanf(fd, "%d", &_max_value) != 1) {
        cout << "error reading max value" << endl;
    }

    int byte_size = _max_value < 256 ? 1 : 2;

    _data = (uint8_t*)malloc(byte_size * _width * _height);
    size_t n = fread(_data, byte_size, _width * _height, fd);
}


void ImageIO::read_jpeg(FILE* fd)
{
    _data = stbi_load_from_file(fd, &_width, &_height, &_channels, 0);
    if (!_data) {
        cout << "error loading jpeg" << endl;
        return;
    }
}


void ImageIO::write_bmp()
{
    stbi_write_bmp("image.bmp", _width, _height, _channels, _data);
}


/* void ImageIO::read_exif() */
/* { */
/*     ExifData* data = exif_data_new_from_data(_data, get_size()); */
/*     cout << data->size << endl; */
/*     exif_data_dump(data); */
/* } */


bool ImageIO::is_ppm(FILE* fd)
{
    char format_str[16];
    char size_str[16];

    fgets(format_str, sizeof(format_str), fd);
    bool val = format_str[0] == 'P' && format_str[1] == '6';
    rewind(fd);

    return val;
}
