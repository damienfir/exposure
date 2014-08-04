#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>

#include "collection.h"

#include "notifications.h"


class Library
{
public:
    Library ();
    virtual ~Library ();
    static Library* get_instance();

    void load();
    void store();
    Collection* get_collection(int);
    void change_collection(int);
    Collection* get_current_collection();

private:
    const char* _library_file;
    std::vector<Collection*> _collections;
    Collection* _current_collection;

    static Library* _instance;
    Publisher* _publisher;
};

#endif /* LIBRARY_H */
