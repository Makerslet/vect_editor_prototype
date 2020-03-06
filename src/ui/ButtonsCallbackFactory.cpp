#include "ButtonsCallbackFactory.h"

#include "AddShapeCmd.h"
#include "RemoveShapeCmd.h"

#include "../shapes/Line.h"
#include "../shapes/Circle.h"

std::function<void()> ButtonsCallbackFactory::createDocument(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {

    };
}

std::function<void()> ButtonsCallbackFactory::exportFile(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {

    };
}

std::function<void()> ButtonsCallbackFactory::importFile(
        std::shared_ptr<IController> controller,
        std::shared_ptr<IGuiContext> context)
{
    return [controller, context]() {

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
