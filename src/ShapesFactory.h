#ifndef SHAPESFACTORY_H
#define SHAPESFACTORY_H

#include "interfaces/IShapesFactory.h"
#include "interfaces/IIdCreator.h"

class ShapesFactory : public IShapesFactory
{
public:
    ShapesFactory(std::shared_ptr<IIdCreator>);

    std::unique_ptr<IShape> createLine() const override;
    std::unique_ptr<IShape> createCircle() const override;

private:
    std::shared_ptr<IIdCreator> _idCreator;
};

#endif // SHAPESFACTORY_H
