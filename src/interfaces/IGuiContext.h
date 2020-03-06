#ifndef IGUICONTEXT_H
#define IGUICONTEXT_H

#include "../documents/base/IDocument.h"
#include "IIdCreator.h"

#include <string>

class IGuiContext
{
public:
    virtual ~IGuiContext() = default;

    virtual std::shared_ptr<IDocument> currentDocument() = 0;

    virtual bool isShapeChoosen() = 0;
    virtual ShapeId choosenShapeId() = 0;

    virtual std::string exportedFileName() = 0;
    virtual std::string importedFileName() = 0;
};

#endif // IGUICONTEXT_H