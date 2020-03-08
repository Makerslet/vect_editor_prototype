#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "interface/ICommandHandler.h"
#include "interface/IFSManager.h"

#include "interface/IDocument.h"
#include "interface/IImportEngine.h"
#include "interface/IExportEngine.h"

#include <memory>

/**
 * @brief Интерфейс основного контроллера приложения.
 * Позволяет получить доступ к основным компонентам приложения
 */

class IController
{
public:
    virtual ~IController() = default;

    /**
     * @brief Метод получения обработчика комманд
     *
     * @return обработчик комманд
     */
    virtual std::shared_ptr<ICommandHandler> commandHandler() = 0;

    /**
     * @brief Метод получения движка импорта из файла
     *
     * @return движок импорта документов
     */
    virtual std::shared_ptr<IImportEngine> importEngine() = 0;

    /**
     * @brief Метод получения движка экспорта документов в файл
     *
     * @return движок экспорта документов в файл
     */
    virtual std::shared_ptr<IExportEngine> exportEngine() = 0;

    /**
     * @brief Метод получения воркера файловой системы
     *
     * @return воркер файловой системы
     */
    virtual std::shared_ptr<IFSManager> fsManager() = 0;
};

#endif // ICONTROLLER_H
