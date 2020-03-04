#ifndef GUIINTERACTOR_H
#define GUIINTERACTOR_H

#include "interfaces/IGuiInteractor.h"
#include "interfaces/IController.h"
#include "interfaces/IConfiguration.h"
#include "interfaces/IFactory.h"

class GuiInteractor : public IGuiInteractor
{
public:
    GuiInteractor(std::shared_ptr<IController>,
                  std::unique_ptr<IFactory>);

    std::shared_ptr<IDocument> createDocument() override;
    std::shared_ptr<IDocument> importDocument(
            const std::string&, std::unique_ptr<IImportEngine>&&) override;
    void exportDocument(
            std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&) override;

    void addCircle(std::shared_ptr<IDocument>) override;
    void addLine(std::shared_ptr<IDocument>) override;

private:
    std::shared_ptr<IController> _controller;
    std::unique_ptr<IFactory> _factory;
};

#endif // GUIINTERACTOR_H
