#include "IdCreator.h"

IdCreator::IdCreator()
{}

ShapeId IdCreator::generateId()
{
    static ShapeId id;
    return ++id;
}
