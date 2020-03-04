#ifndef FACTORY_H
#define FACTORY_H

#include "interfaces/IFactory.h"
#include "interfaces/IIdCreator.h"

class Factory : public IFactory
{
public:
    Factory(std::shared_ptr<IIdCreator>);

    std::unique_ptr<IShape> createLine() const override;
    std::unique_ptr<IShape> createCircle() const override;

private:
    std::shared_ptr<IIdCreator> _idCreator;
};

#endif // FACTORY_H
