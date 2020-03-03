#ifndef IIDCREATOR_H
#define IIDCREATOR_H

#include <cstddef>

struct IIdCreator
{
    virtual ~IIdCreator() = default;
    virtual std::size_t generateId() = 0;
};

#endif // IIDCREATOR_H
