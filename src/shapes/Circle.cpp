#include "Circle.h"
#include <iostream>

Circle::Circle(std::shared_ptr<IIdCreator> idCreator) :
    _idCreator(idCreator)
{
    _id = _idCreator->generateId();
}

std::size_t Circle::id() const
{
    return _id;
}

void Circle::show() const
{
    std::cout << "showing Circle" <<std::endl;
}

std::unique_ptr<IShape> Circle::clone() const
{
    return nullptr;
}
