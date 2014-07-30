#ifndef COLLECTION_H
#define COLLECTION_H

#include <vector>

#include "image/image.h"

class Collection: public std::vector<Image*>
{
public:
    Collection();
    virtual ~Collection();

private:
};

#endif /* COLLECTION_H */
