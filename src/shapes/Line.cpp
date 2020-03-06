#include "Line.h"

#include <iostream>

Line::Line(std::shared_ptr<IIdCreator> idCreator) :
    _idCreator(idCreator)
{
    _id = _idCreator->generateId();
}

std::size_t Line::id() const
{
    return _id;
}

void Line::show() const
{
    std::cout << "showing Line" <<std::endl;
}

std::unique_ptr<IShape> Line::clone() const
{
    return nullptr;
}
