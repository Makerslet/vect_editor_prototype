#ifndef IDCREATOR_H
#define IDCREATOR_H

#include "interfaces/IIdCreator.h"

class IdCreator : public IIdCreator
{
public:
    IdCreator();

    ShapeId generateId() override;
};

#endif // IDCREATOR_H
