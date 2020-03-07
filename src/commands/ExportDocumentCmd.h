#ifndef EXPORTDOCUMENTCMD_H
#define EXPORTDOCUMENTCMD_H

#include "interface/ICommand.h"

#include "interface/IController.h"
#include "interface/IDocument.h"

class ExportDocumentCmd : public ICommand
{
public:
    ExportDocumentCmd(std::shared_ptr<IController>,
                      std::shared_ptr<IDocument>,
                      const std::string&);

    void execute() override;

private:
    std::shared_ptr<IController> _controller;
    std::shared_ptr<IDocument> _document;
    std::string _name;
};

#endif // EXPORTDOCUMENTCMD_H
