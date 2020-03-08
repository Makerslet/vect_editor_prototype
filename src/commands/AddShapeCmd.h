#ifndef ADDSHAPECMD_H
#define ADDSHAPECMD_H

#include "interface/ICommand.h"

#include "interface/IShape.h"
#include "interface/IDocument.h"

#include <memory>

/**
 * @brief Команда добавления фигуры.
 * Команда позволяет добавить фигуру к документу
 */

class AddShapeCmd : public ICommand
{
public:
    /**
     * @brief Конструктор команды
     *
     * @param shape - добавляемая фигура
     * @param document - документ к которому добавлется фигура
     */
    AddShapeCmd(std::shared_ptr<IShape> shape, std::shared_ptr<IDocument> document);

    void execute() override;

private:
    std::shared_ptr<IShape> _shape;
    std::shared_ptr<IDocument> _doc;
};

#endif // ADDSHAPECMD_H
