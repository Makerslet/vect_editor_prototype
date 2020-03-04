#ifndef IGUIINTERACTOR_H
#define IGUIINTERACTOR_H

#include "documents/base/IDocument.h"
#include "IImportEngine.h"
#include "IExportEngine.h"

class IGuiInteractor
{
public:
    virtual ~IGuiInteractor() = default;

    virtual std::shared_ptr<IDocument> createDocument() = 0;
    virtual std::shared_ptr<IDocument> importDocument(
            const std::string&, std::unique_ptr<IImportEngine>&&) = 0;
    virtual void exportDocument(
            std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&) = 0;

    virtual void addCircle(std::shared_ptr<IDocument>) = 0;
    virtual void addLine(std::shared_ptr<IDocument>) = 0;
};

#endif // IGUIINTERACTOR_H
