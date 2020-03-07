#ifndef IMPORTDOCUMENTCMD_H
#define IMPORTDOCUMENTCMD_H

#include "interface/ICommand.h"

#include "interface/IController.h"
#include "interface/IGuiContext.h"

class ImportDocumentCmd : public ICommand
{
public:
    ImportDocumentCmd(
            std::shared_ptr<IController>,
            std::shared_ptr<IGuiContext>,
            const std::string&);

    void execute() override;

private:
    std::shared_ptr<IController> _controller;
    std::shared_ptr<IGuiContext> _guiContext;
    std::string _name;
};

#endif // IMPORTDOCUMENTCMD_H
