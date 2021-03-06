#include "ShapesFactory.h"
#include "Line.h"
#include "Circle.h"

ShapesFactory::ShapesFactory(std::shared_ptr<IIdCreator> idCreator) :
    _idCreator(idCreator)
{}

std::unique_ptr<IShape> ShapesFactory::createLine() const
{
    return std::make_unique<Line>(_idCreator);
}

std::unique_ptr<IShape> ShapesFactory::createCircle() const
{
    return std::make_unique<Circle>(_idCreator);
}
