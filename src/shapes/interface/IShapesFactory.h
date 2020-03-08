#ifndef ISHAPESFACTORY_H
#define ISHAPESFACTORY_H

#include "interface/IShape.h"

/**
 * @brief Интерфейс фабрики фигур.
 * Позволяет создавать фигуры
 */


class IShapesFactory
{
public:
    virtual ~IShapesFactory() = default;

    /**
     * @brief Метод создания линии
     *
     * @return указатель на созданную линию
     */
    virtual std::unique_ptr<IShape> createLine() const = 0;

    /**
     * @brief Метод создания окружности
     *
     * @return указатель на созданную окружность
     */
    virtual std::unique_ptr<IShape> createCircle() const = 0;
};

#endif // ISHAPESFACTORY_H
