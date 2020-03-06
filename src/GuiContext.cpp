#include "GuiContext.h"

GuiContext::GuiContext()
{}

std::shared_ptr<IDocument> GuiContext::currentDocument()
{
    return nullptr;
}

bool GuiContext::isShapeChoosen()
{
    return true;
}

ShapeId GuiContext::choosenShapeId()
{
    return ShapeId();
}

std::string GuiContext::exportedFileName()
{
    return std::string();
}

std::string GuiContext::importedFileName()
{
    return std::string();
}
