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
    virtual std::shared_ptr<IDocument> importDocument(const std::string&) = 0;
    virtual void exportCurrentDocument() = 0;

    virtual void addLine() = 0;
    virtual void addCircle() = 0;
    virtual void removeShape(ShapeId) = 0;
};

#endif // IGUIINTERACTOR_H
