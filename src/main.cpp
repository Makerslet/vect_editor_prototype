#include "GuiInteractor.h"
#include "Configurator.h"
#include "Controller.h"
#include "CommandHandler.h"
#include "IdCreator.h"
#include "Factory.h"
#include "ImportEngine.h"
#include "ExportEngine.h"

int main (int, char **)
{
    std::shared_ptr<ICommandHandler> commandHandler = std::make_shared<CommandHandler>();
    std::shared_ptr<IController> controller = std::make_shared<Controller>(commandHandler);
    std::shared_ptr<IIdCreator> idCreator = std::make_shared<IdCreator>();

    // создаем класс доступный из Gui
    std::unique_ptr<IGuiInteractor> guiInteractor =
            std::make_unique<GuiInteractor>(controller);

    // имитируем вызов создания документа
    auto createdDocument = guiInteractor->createDocument();

    // имитируем вызов импорта документа
    std::shared_ptr<IConfiguration> config = std::make_shared<Configurator>();
    auto importedDocument = guiInteractor->importDocument(std::string("name"), std::make_unique<ImportEngine>(config));

    // имитируем вызов экспорта документа
    guiInteractor->exportDocument(createdDocument, std::make_unique<ExportEngine>());

    return 0;
}


