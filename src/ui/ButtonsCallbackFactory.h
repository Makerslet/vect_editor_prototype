#ifndef BUTTONSCALLBACKFACTORY_H
#define BUTTONSCALLBACKFACTORY_H

#include "interface/IController.h"
#include "interface/IGuiContext.h"
#include "interface/IShapesFactory.h"

#include "interface/IDocsFactory.h"

#include <memory>
#include <functional>

class ButtonsCallbackFactory
{
public:
    static std::function<void()> createDocument(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>,
                                            std::shared_ptr<IDocsFactory>);

    static std::function<void()> exportToFile(std::shared_ptr<IController>,
                                            std::shared_ptr<IGuiContext>);

    static std::function<void()> importFromFile(std::shared_ptr<IController>,
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
