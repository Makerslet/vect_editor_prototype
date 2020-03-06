#ifndef SHAPESFACTORY_H
#define SHAPESFACTORY_H

#include "interface/IShapesFactory.h"
#include "interface/IIdCreator.h"

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
