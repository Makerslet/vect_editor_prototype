#ifndef IDCREATOR_H
#define IDCREATOR_H

#include "interface/IIdCreator.h"

/**
 * @brief Реализация генератора идентификаторов
 */

class IdCreator : public IIdCreator
{
public:
    IdCreator();

    ShapeId generateId() override;
};

#endif // IDCREATOR_H
