#include "image.h"
#include "image_thumbnail.h"


class ImageRAW: public Image
{
public:
    ImageRAW ();
    virtual ~ImageRAW ();
    ImageThumbnail* get_thumbnail();

    void load(const char*);

private:
    const char* _filename;
    ImageThumbnail* _thumbnail;
};
