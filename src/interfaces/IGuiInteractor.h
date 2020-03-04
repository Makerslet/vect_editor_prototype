#ifndef IGUIINTERACTOR_H
#define IGUIINTERACTOR_H

#include "../documents/base/IDocument.h"
#include "IImportEngine.h"
#include "IExportEngine.h"
#include "IIdCreator.h"

class IGuiInteractor
{
public:
    virtual ~IGuiInteractor() = default;

    virtual std::shared_ptr<IDocument> createDocument() = 0;
    virtual std::shared_ptr<IDocument> importDocument(
            const std::string&, std::unique_ptr<IImportEngine>&&) = 0;
    virtual void exportDocument(
            std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&) = 0;

    virtual void addShape(std::shared_ptr<IDocument>, std::shared_ptr<IShape>) = 0;
    virtual void removeShape(std::shared_ptr<IDocument>, ShapeId) = 0;
};

#endif // IGUIINTERACTOR_H
