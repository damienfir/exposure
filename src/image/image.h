#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>


class Image
{
public:
    Image();
    Image(uint8_t* data, int, int, int);
    virtual ~Image();
    int get_size();
    uint8_t* get_data();

    int width;
    int height;
    int channels;
    int max_value;

protected:
    uint8_t* _data;
};

#endif /* IMAGE_H */
