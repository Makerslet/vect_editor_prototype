#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include "interface/IShape.h"
#include "interface/IIdCreator.h"

#include <cstddef>
#include <memory>


/**
 * @brief Интерфейс документа.
 * Позволяет отобразить документ, добавить и удалить фигуры
 */

struct IDocument {
    virtual ~IDocument() = default;

    /**
     * @brief Метод отображения документа
     */
    virtual void show() const = 0;

    /**
     * @brief Метод добавления фигуры
     * @param shape добавляемая фигура
     */
    virtual void addShape(std::shared_ptr<IShape> shape) = 0;

    /**
     * @brief Метод удаления фигуры
     * @param id идентификатор удаляемой фигуры
     */
    virtual void removeShape(ShapeId id) = 0;
};

#endif // IDOCUMENT_H
