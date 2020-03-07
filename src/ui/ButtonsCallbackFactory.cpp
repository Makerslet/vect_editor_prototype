#include "ButtonsCallbackFactory.h"

#include "AddShapeCmd.h"
#include "RemoveShapeCmd.h"
#include "ExportDocumentCmd.h"
#include "ImportDocumentCmd.h"

#include "../shapes/Line.h"
#include "../shapes/Circle.h"

std::function<void()> ButtonsCallbackFactory::createDocument(std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context, std::shared_ptr<IDocsFactory> factory)
{
    return [controller, context, factory]() {
        context->setCurrentDocument(factory->createEmptyDocument());
    };
}

std::function<void()> ButtonsCallbackFactory::exportToFile(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {
        // пока не знаю откуда правильнее передать имя
        auto exportToFileCmd = std::make_shared<ExportDocumentCmd>(
                    controller, context->currentDocument(), "");
        controller->commandHandler()->addCommand(exportToFileCmd);
    };
}

std::function<void()> ButtonsCallbackFactory::importFromFile(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {
        auto importFromFileCmd = std::make_shared<ImportDocumentCmd>(
                    controller, context, context->importedFileName());
        controller->commandHandler()->addCommand(importFromFileCmd);
    };
}

std::function<void()> ButtonsCallbackFactory::createLine(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context,
        std::shared_ptr<IShapesFactory> shapesFactory)
{
    return [controller, context, shapesFactory]() {

        auto createShapeCmd = std::make_shared<AddShapeCmd>(
                    shapesFactory->createLine(), context->currentDocument());

        controller->commandHandler()->addCommand(createShapeCmd);
    };
}

std::function<void()> ButtonsCallbackFactory::createCircle(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context,
        std::shared_ptr<IShapesFactory> shapesFactory)
{
    return [controller, context, shapesFactory]() {
        auto createShapeCmd = std::make_shared<AddShapeCmd>(
                    shapesFactory->createCircle(), context->currentDocument());

        controller->commandHandler()->addCommand(createShapeCmd);
    };
}

std::function<void()> ButtonsCallbackFactory::removeShape(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {
        auto createShapeCmd = std::make_shared<RemoveShapeCmd>(
                    context->currentDocument(),
                    context->choosenShapeId());
        controller->commandHandler()->addCommand(createShapeCmd);
    };
}
