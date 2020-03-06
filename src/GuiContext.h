#ifndef GUICONTEXT_H
#define GUICONTEXT_H

#include "interfaces/IGuiContext.h"

class GuiContext : public IGuiContext
{
public:
    GuiContext();

    std::shared_ptr<IDocument> currentDocument() override;

    bool isShapeChoosen() override;
    ShapeId choosenShapeId() override;

    std::string exportedFileName() override;
    std::string importedFileName() override;
};

#endif // GUICONTEXT_H
