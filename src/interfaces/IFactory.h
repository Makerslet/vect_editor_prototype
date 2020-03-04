#ifndef IFACTORY_H
#define IFACTORY_H

#include "../shapes/base/IShape.h"

class IFactory
{
public:
    virtual ~IFactory() = default;

    virtual std::unique_ptr<IShape> createLine() const = 0;
    virtual std::unique_ptr<IShape> createCircle() const = 0;
};

#endif // IFACTORY_H
