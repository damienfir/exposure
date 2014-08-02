#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>
#include <FreeImagePlus.h>


class Image: public fipImage
{
public:
    Image(const char* filename);
    virtual ~Image();

protected:
    const char* _filename;
};

#endif /* IMAGE_H */
