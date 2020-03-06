#include "Controller.h"

Controller::Controller(
        std::shared_ptr<ICommandHandler> cmdHandler,
        std::shared_ptr<IImportEngine> importEngine,
        std::shared_ptr<IExportEngine> exportEngine,
        std::shared_ptr<IFSManager> fsManager) :
    _handler(cmdHandler),
    _importEngine(importEngine),
    _exportEngine(exportEngine),
    _fsManager(fsManager)
{}

std::shared_ptr<ICommandHandler> Controller::commandHandler()
{
    return _handler;
}

std::shared_ptr<IImportEngine> Controller::importEngine()
{
    return _importEngine;
}

std::shared_ptr<IExportEngine> Controller::exportEngine()
{
    return _exportEngine;
}

std::shared_ptr<IFSManager> Controller::fsManager()
{
    return _fsManager;
}
