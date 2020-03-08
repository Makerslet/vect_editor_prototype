#ifndef ISHAPE_H
#define ISHAPE_H

#include <cstddef>
#include <memory>

/**
 * @brief Интерфейс фигуры
 */

struct IShape {
    virtual ~IShape() = default;
    /**
     * @brief Метод получения идентификатора
     *
     * @return идентификатор фигуры
     */
    virtual std::size_t id() const = 0;

    /**
     * @brief Метод отображения фигуры
     */
    virtual void show() const = 0;

    /**
     * @brief Метод клонирования фигуры
     *
     * @return Указатель на копию фигуры
     */
    virtual std::unique_ptr<IShape> clone() const = 0;
};

#endif // ISHAPE_H
