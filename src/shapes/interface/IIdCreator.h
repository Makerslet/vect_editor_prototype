#ifndef IIDCREATOR_H
#define IIDCREATOR_H

#include <cstddef>

using ShapeId = std::size_t;

/**
 * @brief Интерфейс генератора идентификаторов для фигур.
 */

struct IIdCreator
{
    virtual ~IIdCreator() = default;
    /**
     * @brief Метод создания идентификаторов
     * @return идентификатор фигуры
     */
    virtual ShapeId generateId() = 0;
};

#endif // IIDCREATOR_H
