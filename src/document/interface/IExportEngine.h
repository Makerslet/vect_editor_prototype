#ifndef IEXPORTENGINE_H
#define IEXPORTENGINE_H

#include "interface/IDocument.h"

#include <string>
#include <memory>

/**
 * @brief Интерфейс движка экспорта документов
 * Позволяет преобразовать документ в другой формат
 */


class IExportEngine
{
public:
    virtual ~IExportEngine() = default;

    /**
     * @brief Метод преобразования документа
     * @param document преобразуемы документ
     * @return текстовое представление документа в новом формате
     */
    virtual std::string exportDocument(std::shared_ptr<IDocument> document) = 0;
};

#endif // IEXPORTENGINE_H
