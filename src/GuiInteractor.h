#ifndef GUIINTERACTOR_H
#define GUIINTERACTOR_H

#include "interfaces/IGuiInteractor.h"
#include "interfaces/IController.h"
#include "interfaces/IConfiguration.h"
#include "interfaces/IFactory.h"

class GuiInteractor : public IGuiInteractor
{
public:
    GuiInteractor(std::shared_ptr<IController>);

    std::shared_ptr<IDocument> createDocument() override;
    std::shared_ptr<IDocument> importDocument(
            const std::string&, std::unique_ptr<IImportEngine>&&) override;
    void exportCurrentDocument(
            std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&) override;

    void addShape(std::shared_ptr<IDocument>, std::shared_ptr<IShape>) override;
    void removeShape(std::shared_ptr<IDocument>, ShapeId) override;

private:
    std::shared_ptr<IController> _controller;
};

#endif // GUIINTERACTOR_H
