#include "ImportDocumentCmd.h"

ImportDocumentCmd::ImportDocumentCmd(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> guiContext,
        const std::string& name) :
    _controller(controller),
    _guiContext(guiContext),
    _name(name)
{
}

void ImportDocumentCmd::execute()
{
    std::string data =_controller->fsManager()->readFile(_name);
    _guiContext->setCurrentDocument(
                _controller->importEngine()->importDocument(data));
}
