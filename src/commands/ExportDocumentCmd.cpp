#include "ExportDocumentCmd.h"

ExportDocumentCmd::ExportDocumentCmd(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IDocument> document,
        const std::string& name) :
    _controller(controller),
    _document(document),
    _name(name)
{
}

void ExportDocumentCmd::execute()
{
    std::string strDoc = _controller->exportEngine()->exportDocument(_document);
    _controller->fsManager()->writeFile(_name, strDoc);
}
