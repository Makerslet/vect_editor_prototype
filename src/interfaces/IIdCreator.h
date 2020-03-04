#ifndef IIDCREATOR_H
#define IIDCREATOR_H

#include <cstddef>

using ShapeId = std::size_t;

struct IIdCreator
{
    virtual ~IIdCreator() = default;
    virtual ShapeId generateId() = 0;
};

#endif // IIDCREATOR_H
