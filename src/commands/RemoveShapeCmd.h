#ifndef REMOVESHAPECMD_H
#define REMOVESHAPECMD_H

#include "interface/ICommand.h"

#include "interface/IIdCreator.h"
#include "interface/IDocument.h"

#include <memory>

/**
 * @brief Команда удаления фигуры из документа.
 * Команда позволяет удалить фигуру из документа
 */

class RemoveShapeCmd : public ICommand
{
public:
    /**
     * @brief Конструктор команды
     *
     * @param document - документ из которого удаляется фигура
     * @param id - идентификатор удаляемой фигуры
     */
    RemoveShapeCmd(std::shared_ptr<IDocument> document, ShapeId id);
    void execute() override;

private:
    std::shared_ptr<IDocument> _doc;
    ShapeId _id;
};

#endif // REMOVESHAPECMD_H
