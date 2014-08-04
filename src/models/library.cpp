#include "library.h"

#include <jansson.h>
#include <iostream>


Library* Library::_instance = NULL;


Library::Library()
{
    _library_file = "library.json";
    _instance = this;
    _publisher = Publisher::get_instance();
}


Library::~Library()
{
}


Library* Library::get_instance()
{
      if (_instance == NULL) {
          _instance = new Library();
      }
      return _instance;
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
        std::cout << "added collection: " << json_string_value(name) << std::endl;
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


Collection* Library::get_collection(int index)
{
    return _collections[index];
}


Collection* Library::get_current_collection()
{
    return _current_collection;
}


void Library::change_collection(int index)
{
    _current_collection = _collections[index];
    _publisher->notify(new CollectionChangedNotification(_current_collection));
}

