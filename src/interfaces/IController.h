#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "../documents/base/IDocument.h"
#include "ICommandHandler.h"
#include "IImportEngine.h"
#include "IExportEngine.h"
#include <memory>

class IController
{
public:
    virtual ~IController() = default;

    virtual std::shared_ptr<ICommandHandler> commandHandler() = 0;
    virtual std::shared_ptr<IImportEngine> importEngine() = 0;
    virtual std::shared_ptr<IExportEngine> exportEngine() = 0;

    virtual std::shared_ptr<IDocument> currentDocument() = 0;
    virtual void setCurrentDocument() = 0;
};

#endif // ICONTROLLER_H
