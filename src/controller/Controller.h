#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "interface/IController.h"
#include "interface/IFSManager.h"

#include "interface/ICommandHandler.h"

/**
 * @brief Реализация контроллера
 */


class Controller : public IController
{
public:
    /**
     * @brief Конструктор контроллера
     *
     * @param cmdHandler - исполнитель комманда
     * @param importEngine - движок импорта
     * @param exportEngine - документ экспорта
     * @param fsManager - воркер файловой системы
     */
    Controller(std::shared_ptr<ICommandHandler> cmdHandler,
               std::shared_ptr<IImportEngine> importEngine,
               std::shared_ptr<IExportEngine> exportEngine,
               std::shared_ptr<IFSManager> fsManager);

    std::shared_ptr<ICommandHandler> commandHandler() override;
    std::shared_ptr<IImportEngine> importEngine() override;
    std::shared_ptr<IExportEngine> exportEngine() override;
    std::shared_ptr<IFSManager> fsManager() override;

private:
    std::shared_ptr<ICommandHandler> _handler;
    std::shared_ptr<IImportEngine> _importEngine;
    std::shared_ptr<IExportEngine> _exportEngine;
    std::shared_ptr<IFSManager> _fsManager;
};

#endif // CONTROLLER_H
