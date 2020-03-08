#ifndef BUTTONSCALLBACKFACTORY_H
#define BUTTONSCALLBACKFACTORY_H

#include "interface/IController.h"
#include "interface/IGuiContext.h"
#include "interface/IShapesFactory.h"

#include "interface/IDocsFactory.h"

#include <memory>
#include <functional>

/**
 * @brief Генератор обработчиков для клавиш
 */

class ButtonsCallbackFactory
{
public:
    /**
     * @brief Генератор функтора для клавиши создания документа
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     * @param docsFactory - фабрика документов
     */
    static std::function<void()> createDocument(std::shared_ptr<IController> controller,
                                            std::shared_ptr<IGuiContext> guiContext,
                                            std::shared_ptr<IDocsFactory> docsFactory);

    /**
     * @brief Генератор функтора для клавиши экспорта документа
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     */
    static std::function<void()> exportToFile(std::shared_ptr<IController> controller,
                                            std::shared_ptr<IGuiContext> guiContext);

    /**
     * @brief Генератор функтора для клавиши импорта документа
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     */
    static std::function<void()> importFromFile(std::shared_ptr<IController> controller,
                                            std::shared_ptr<IGuiContext> guiContext);

    /**
     * @brief Генератор функтора для клавиши создания фигуры линии
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     * @param shapesFactory - фабрика фигур
     */
    static std::function<void()> createLine(std::shared_ptr<IController> controller,
                                            std::shared_ptr<IGuiContext> guiContext,
                                            std::shared_ptr<IShapesFactory> shapesFactory);

    /**
     * @brief Генератор функтора для клавиши создания фигуры окружности
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     * @param shapesFactory - фабрика фигур
     */
    static std::function<void()> createCircle(std::shared_ptr<IController> controller,
                                              std::shared_ptr<IGuiContext> guiContext,
                                              std::shared_ptr<IShapesFactory> shapesFactory);

    /**
     * @brief Генератор функтора для клавиши удаления выделенной фигуры
     *
     * @param controller - контроллер приложения
     * @param guiContext - графический контекст
     */
    static std::function<void()> removeShape(std::shared_ptr<IController> controller,
                                            std::shared_ptr<IGuiContext> guiContext);
};

#endif // BUTTONSCALLBACKFACTORY_H
