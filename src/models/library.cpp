#include "library.h"

#include <jansson.h>


Library::Library()
{
    _library_file = "library.json";
}

Library::~Library()
{
}


void Library::load()
{
    json_error_t error;

    json_t* lib = json_load_file(_library_file, 0, &error);
    for (size_t i = 0; i < json_array_size(lib); ++i) {
        json_t* item = json_array_get(lib, i);
        json_t* name = json_object_get(item, "name");
        json_t* path = json_object_get(item, "path");

        Collection* col = new Collection();
        col->set_name(json_string_value(name));
        col->set_path(json_string_value(path));
        _collections.push_back(col);
    }
}


void Library::store()
{
    json_t* lib = json_array(); 

    for (size_t i = 0; i < _collections.size(); ++i)
    {
        json_t* item = json_object();
        json_object_set(item, "name", json_string(_collections[i]->name()));
        json_object_set(item, "path", json_string(_collections[i]->path()));
        json_array_append(lib, item); 
    }

    json_dump_file(lib, _library_file, JSON_INDENT(2));
}


/*
- path relative to base folder (or absolute)
- collection contains pictures from everywhere
- pictures can belong to multiple collections

[
  {
    'name': 'venice',
    'path': '/data/photography/files/2014/06/venice/'
  }
]


*/
