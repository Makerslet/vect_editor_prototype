#ifndef EXPORTDOCUMENTCMD_H
#define EXPORTDOCUMENTCMD_H

#include "interface/ICommand.h"

#include "interface/IController.h"
#include "interface/IDocument.h"

/**
 * @brief Команда экспорта документа.
 * Команда позволяет экспортировать документ в файл
 */

class ExportDocumentCmd : public ICommand
{
public:
    /**
     * @brief Конструктор команды
     *
     * @param controller - контроллер приложения
     * @param document - экспортируемый документ
     * @param name - имя файла для экспортируемого документа
     */
    ExportDocumentCmd(std::shared_ptr<IController> controller,
                      std::shared_ptr<IDocument> document,
                      const std::string& name);

    void execute() override;

private:
    std::shared_ptr<IController> _controller;
    std::shared_ptr<IDocument> _document;
    std::string _name;
};

#endif // EXPORTDOCUMENTCMD_H
