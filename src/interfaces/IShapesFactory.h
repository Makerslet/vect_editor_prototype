#ifndef ISHAPESFACTORY_H
#define ISHAPESFACTORY_H

#include "../shapes/base/IShape.h"

class IShapesFactory
{
public:
    virtual ~IShapesFactory() = default;

    virtual std::unique_ptr<IShape> createLine() const = 0;
    virtual std::unique_ptr<IShape> createCircle() const = 0;
};

#endif // ISHAPESFACTORY_H
