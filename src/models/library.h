#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>

#include "collection.h"


class Library
{
public:
    Library ();
    virtual ~Library ();
    static Library* get_instance();

    void load();
    void store();
    Collection* get_collection(int);

private:
    const char* _library_file;
    std::vector<Collection*> _collections;

    static Library* _instance;
};

#endif /* LIBRARY_H */
