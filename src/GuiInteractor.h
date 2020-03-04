#ifndef GUIINTERACTOR_H
#define GUIINTERACTOR_H

#include "IGuiInteractor.h"
#include "IController.h"
#include "IConfiguration.h"

class GuiInteractor : public IGuiInteractor
{
public:
    GuiInteractor(std::shared_ptr<IController>,
                  std::shared_ptr<IConfiguration>);

    std::shared_ptr<IDocument> createDocument();
    std::shared_ptr<IDocument> importDocument(
            const std::string&, std::unique_ptr<IImportEngine>&&);
    void exportDocument(
            std::shared_ptr<IDocument>, std::unique_ptr<IExportEngine>&&);

    void addCircle(std::shared_ptr<IDocument>);
    void addLine(std::shared_ptr<IDocument>);

private:
    std::shared_ptr<IController> _controller;
    std::shared_ptr<IConfiguration> _configuration;
};

#endif // GUIINTERACTOR_H
