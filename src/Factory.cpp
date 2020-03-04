#include "Factory.h"
#include "shapes/Line.h"
#include "shapes/Circle.h"

Factory::Factory(std::shared_ptr<IIdCreator> idCreator) :
    _idCreator(idCreator)
{}

std::unique_ptr<IShape> Factory::createLine() const
{
    return std::make_unique<Line>(_idCreator);
}

std::unique_ptr<IShape> Factory::createCircle() const
{
    return std::make_unique<Circle>(_idCreator);
}
