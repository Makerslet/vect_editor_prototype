#include "GuiInteractor.h"
#include "documents/Document.h"

GuiInteractor::GuiInteractor(
        std::shared_ptr<IController> controller,
        std::unique_ptr<IFactory> factory) :
    _controller(controller),
    _factory(std::move(factory))
{}


std::shared_ptr<IDocument> GuiInteractor::createDocument()
{
    return std::make_shared<Document>();
}

std::shared_ptr<IDocument> GuiInteractor::importDocument(
        const std::string& name, std::unique_ptr<IImportEngine>&& engine)
{
    return engine->importDocument(name);
}

void GuiInteractor::exportDocument(
        std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&)
{
    // addCommand exportDocument
}

void GuiInteractor::addCircle(std::shared_ptr<IDocument>)
{
    std::unique_ptr<IShape> circle = _factory->createCircle();
    // addCommand addShape
}

void GuiInteractor::addLine(std::shared_ptr<IDocument>)
{
    std::unique_ptr<IShape> line = _factory->createLine();
    // addCommand addShape
}
