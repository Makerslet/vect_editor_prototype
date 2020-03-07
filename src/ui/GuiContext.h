#ifndef GUICONTEXT_H
#define GUICONTEXT_H

#include "interface/IGuiContext.h"

#include "interface/IDocument.h"

class GuiContext : public IGuiContext
{
public:
    GuiContext();

    void setCurrentDocument(std::shared_ptr<IDocument>) override;
    std::shared_ptr<IDocument> currentDocument() override;

    bool isShapeChoosen() override;
    ShapeId choosenShapeId() override;

    std::string exportedFileName() override;
    std::string importedFileName() override;
};

#endif // GUICONTEXT_H
