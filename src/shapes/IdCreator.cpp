#include "IdCreator.h"

#include <iostream>

IdCreator::IdCreator()
{}

ShapeId IdCreator::generateId()
{
    static ShapeId id;

    std::cout << "IdCreator::generateId()" << std::endl;

    return ++id;
}
