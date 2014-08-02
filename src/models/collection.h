#ifndef COLLECTION_H
#define COLLECTION_H

#include <vector>

#include "image.h"


class Collection: public std::vector<Image*>
{
public:
    Collection();
    virtual ~Collection();

    void load_images();

    void set_name(const char* str) { _name = str; }
    void set_path(const char* str) { _path = str; }
    const char* name() { return _name; }
    const char* path() { return _path; }

private:
    const char* _name;
    const char* _path;
};

#endif /* COLLECTION_H */
