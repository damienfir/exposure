#include "collection.h"

#include <iostream>
#include <tinydir/tinydir.h>



Collection::Collection(): std::vector<Image*>()
{
}


Collection::~Collection()
{
}


void Collection::load_images()
{
    tinydir_dir dir;
    tinydir_open(&dir, _path);

    while (dir.has_next) {
        tinydir_file file;
        tinydir_readfile(&dir, &file);

        if (!file.is_dir) {
            std::cout << "loading image: " << file.name << std::endl;
            push_back(new Image(file.name));
        }

        tinydir_next(&dir);
    }
}
