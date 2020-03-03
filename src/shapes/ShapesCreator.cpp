#include "ShapesCreator.h"
#include "Line.h"
#include "Circle.h"

#include <cassert>

std::unique_ptr<IShape> ShapesCreator::createShape(ShapeType shapeType,
        std::shared_ptr<IIdCreator> idCreator)
{
    switch (shapeType) {
    case ShapeType::Line:
        return std::make_unique<Line>(idCreator);
    case ShapeType::Circle:
        return std::make_unique<Circle>(idCreator);
    }

    assert(false);

    return nullptr;
}
