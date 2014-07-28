#include <stdio.h>

class Image
{
public:
    Image (const char* filename): _filename(filename) {}
    virtual ~Image ();
    void load();
    void load_thumb();
    void read_ppm(FILE*);
    void read_jpeg(FILE*);
    void read_exif();
    void write_bmp();
    int get_size();
    bool is_ppm(FILE*);

private:
    const char* _filename;
    int _width;
    int _height;
    int _channels;
    unsigned char* _data;
    int _max_value;
};
