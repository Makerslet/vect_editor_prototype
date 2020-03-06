#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "interfaces/IController.h"
#include "interfaces/ICommandHandler.h"
#include "interfaces/IFSManager.h"

class Controller : public IController
{
public:
    Controller(std::shared_ptr<ICommandHandler>,
               std::shared_ptr<IImportEngine>,
               std::shared_ptr<IExportEngine>,
               std::shared_ptr<IFSManager>);

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
