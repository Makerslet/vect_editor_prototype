#include "controller/Configurator.h"
#include "controller/Controller.h"
#include "controller/CommandHandler.h"
#include "controller/FSManager.h"

#include "document/ImportEngine.h"
#include "document/ExportEngine.h"

#include "shapes/IdCreator.h"
#include "shapes/ShapesFactory.h"

#include "ui/GuiContext.h"
#include "ui/Button.h"
#include "ui/ButtonsCallbackFactory.h"

int main (int, char **)
{
    // App kernel
    std::shared_ptr<IConfiguration> config = std::make_shared<Configurator>();
    std::shared_ptr<IImportEngine> importEngine = std::make_shared<ImportEngine>();
    std::shared_ptr<IExportEngine> exportEngine = std::make_shared<ExportEngine>();
    std::shared_ptr<IFSManager> fsManager = std::make_shared<FSManager>();

    std::shared_ptr<ICommandHandler> commandHandler = std::make_shared<CommandHandler>();
    std::shared_ptr<IController> controller = std::make_shared<Controller>(
                commandHandler, importEngine, exportEngine, fsManager);

    // GuiComponents
    std::shared_ptr<IGuiContext> guiContext = std::make_shared<GuiContext>();

    std::shared_ptr<IIdCreator> idCreator = std::make_shared<IdCreator>();
    std::shared_ptr<IShapesFactory> shapesFactory = std::make_shared<ShapesFactory>(idCreator);

    // controlButtons
    std::unique_ptr<IButton> createDocButton = std::make_unique<Button>(
                ButtonsCallbackFactory::createDocument(controller, guiContext));
    std::unique_ptr<IButton> exportDocButton = std::make_unique<Button>(
                ButtonsCallbackFactory::exportFile(controller, guiContext));
    std::unique_ptr<IButton> importDocButton = std::make_unique<Button>(
                ButtonsCallbackFactory::importFile(controller, guiContext));
    std::unique_ptr<IButton> createLineButton = std::make_unique<Button>(
                ButtonsCallbackFactory::createLine(controller, guiContext, shapesFactory));
    std::unique_ptr<IButton> createCircleButton = std::make_unique<Button>(
                ButtonsCallbackFactory::createLine(controller, guiContext, shapesFactory));
    std::unique_ptr<IButton> removeChoosenShapeButton = std::make_unique<Button>(
                ButtonsCallbackFactory::removeShape(controller, guiContext));

    return 0;
}


