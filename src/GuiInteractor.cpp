#include "GuiInteractor.h"
#include "documents/Document.h"

GuiInteractor::GuiInteractor(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IConfiguration> configuration) :
    _controller(controller), _configuration(configuration)
{}


std::shared_ptr<IDocument> GuiInteractor::createDocument()
{
    return std::make_shared<Document>();
}

std::shared_ptr<IDocument> GuiInteractor::importDocument(
        const std::string& name, std::unique_ptr<IImportEngine>&& engine)
{
    return engine->importDocument(
                _configuration->importPath() + name);
}

void GuiInteractor::exportDocument(
        std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&)
{
    // addCommand exportDocument
}

void GuiInteractor::addCircle(std::shared_ptr<IDocument>)
{
    // addCommand addCircle
}

void GuiInteractor::addLine(std::shared_ptr<IDocument>)
{
    // addCommand addLine
}
