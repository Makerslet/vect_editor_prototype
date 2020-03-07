#ifndef IGUICONTEXT_H
#define IGUICONTEXT_H

#include "interface/IDocument.h"
#include "interface/IIdCreator.h"

#include <string>

class IGuiContext
{
public:
    virtual ~IGuiContext() = default;

    virtual void setCurrentDocument(std::shared_ptr<IDocument>) = 0;
    virtual std::shared_ptr<IDocument> currentDocument() = 0;

    virtual bool isShapeChoosen() = 0;
    virtual ShapeId choosenShapeId() = 0;

    virtual std::string exportedFileName() = 0;
    virtual std::string importedFileName() = 0;
};

#endif // IGUICONTEXT_H
