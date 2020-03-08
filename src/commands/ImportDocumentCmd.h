#ifndef IMPORTDOCUMENTCMD_H
#define IMPORTDOCUMENTCMD_H

#include "interface/ICommand.h"

#include "interface/IController.h"
#include "interface/IGuiContext.h"

/**
 * @brief Команда импорта документа.
 * Команда позволяет импортировать документ из файла
 */

class ImportDocumentCmd : public ICommand
{
public:
    /**
     * @brief Конструктор команды
     *
     * @param controller - контроллер приложения
     * @param guiContext - контекст графической части приложения
     * @param name - имя файла из которого импортируется документ
     */
    ImportDocumentCmd(
            std::shared_ptr<IController> controller,
            std::shared_ptr<IGuiContext> guiContext,
            const std::string& name);

    void execute() override;

private:
    std::shared_ptr<IController> _controller;
    std::shared_ptr<IGuiContext> _guiContext;
    std::string _name;
};

#endif // IMPORTDOCUMENTCMD_H
