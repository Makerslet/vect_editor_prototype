#include "GuiInteractor.h"
#include "documents/Document.h"

#include <iostream>

GuiInteractor::GuiInteractor(
        std::shared_ptr<IController> controller) :
    _controller(controller)
{}


std::shared_ptr<IDocument> GuiInteractor::createDocument()
{
    std::cout << "GuiInteractor::createDocument()" << std::endl;
    return std::make_shared<Document>();
}

std::shared_ptr<IDocument> GuiInteractor::importDocument(
        const std::string& name, std::unique_ptr<IImportEngine>&& engine)
{
    std::cout << "GuiInteractor::importDocument" << std::endl;
    return engine->importDocument(name);
}

void GuiInteractor::exportDocument(
        std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&)
{
    std::cout << "GuiInteractor::exportDocument" << std::endl;
    // addCommand exportDocument
}

void GuiInteractor::addShape(std::shared_ptr<IDocument>, std::shared_ptr<IShape>)
{
    std::cout << "GuiInteractor::addCircle" << std::endl;
    // addCommand addShape
}

void GuiInteractor::removeShape(std::shared_ptr<IDocument>, ShapeId)
{
    std::cout << "GuiInteractor::addLine" << std::endl;
    // addCommand addShape
}
