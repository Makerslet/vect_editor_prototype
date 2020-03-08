#ifndef CIRCLE_H
#define CIRCLE_H

#include "interface/IShape.h"
#include "interface/IIdCreator.h"

/**
 * @brief Реализация фигуры - окружность
 */

class Circle : public IShape
{
public:
    Circle(std::shared_ptr<IIdCreator>);

    std::size_t id() const override;
    void show() const override;
    std::unique_ptr<IShape> clone() const override;

private:
    std::shared_ptr<IIdCreator> _idCreator;

    std::size_t _id;
};

#endif // CIRCLE_H
