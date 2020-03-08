#ifndef IIMPORTENGINE_H
#define IIMPORTENGINE_H

#include "interface/IDocument.h"

/**
 * @brief Интерфейс движка импорта документов
 * Позволяет прочитать документ из текстового формата и создать в стандартном
 */

class IImportEngine
{
public:
    virtual ~IImportEngine() = default;

    /**
     * @brief Метод преобразования документа
     * @param name имя файла
     * @return указатель на документ
     */
    virtual std::shared_ptr<IDocument> importDocument(const std::string& name) = 0;
};


#endif // IIMPORTENGINE_H
