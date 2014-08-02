#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>

#include "collection.h"


class Library
{
public:
    Library ();
    virtual ~Library ();

    void load();
    void store();
    Collection* get_collection(int);

private:
    const char* _library_file;
    std::vector<Collection*> _collections;
};

#endif /* LIBRARY_H */
