#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "interface/ICommandHandler.h"
#include "interface/IFSManager.h"

#include "interface/IDocument.h"
#include "interface/IImportEngine.h"
#include "interface/IExportEngine.h"

#include <memory>

class IController
{
public:
    virtual ~IController() = default;

    virtual std::shared_ptr<ICommandHandler> commandHandler() = 0;
    virtual std::shared_ptr<IImportEngine> importEngine() = 0;
    virtual std::shared_ptr<IExportEngine> exportEngine() = 0;
    virtual std::shared_ptr<IFSManager> fsManager() = 0;
};

#endif // ICONTROLLER_H
