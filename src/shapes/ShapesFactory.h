#ifndef SHAPESFACTORY_H
#define SHAPESFACTORY_H

#include "interface/IShapesFactory.h"
#include "interface/IIdCreator.h"

/**
 * @brief Реализация фабрики фигур
 */

class ShapesFactory : public IShapesFactory
{
public:
    /**
     * @brief Конструктор фабрики
     *
     * @param idCreator - генератор идентификаторов
     */
    ShapesFactory(std::shared_ptr<IIdCreator> idCreator);

    std::unique_ptr<IShape> createLine() const override;
    std::unique_ptr<IShape> createCircle() const override;

private:
    std::shared_ptr<IIdCreator> _idCreator;
};

#endif // SHAPESFACTORY_H
