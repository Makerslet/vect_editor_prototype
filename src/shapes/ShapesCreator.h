#ifndef SHAPESCREATOR_H
#define SHAPESCREATOR_H

#include "base/IShape.h"
#include "base/IIdCreator.h"

enum class ShapeType {
    Line,
    Circle
};

class ShapesCreator
{
public:
    ShapesCreator() = delete;

    static std::unique_ptr<IShape> createShape(
            ShapeType shapeType, std::shared_ptr<IIdCreator> idCreator);
};

#endif // SHAPESCREATOR_H
