#ifndef BUTTONSCALLBACKFACTORY_H
#define BUTTONSCALLBACKFACTORY_H

#include "interfaces/IController.h"
#include "interfaces/IGuiContext.h"
#include "interfaces/IShapesFactory.h"

#include <memory>
#include <functional>

class ButtonsCallbackFactory
{
public:
    static std::function<void()> createDocument(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>);

    static std::function<void()> exportFile(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>);

    static std::function<void()> importFile(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>);

    static std::function<void()> createLine(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>,
                                            std::shared_ptr<IShapesFactory>);

    static std::function<void()> createCircle(std::shared_ptr<IController>,
                                              std::shared_ptr<IGuiContext>,
                                              std::shared_ptr<IShapesFactory>);

    static std::function<void()> removeShape(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>);
};

#endif // BUTTONSCALLBACKFACTORY_H