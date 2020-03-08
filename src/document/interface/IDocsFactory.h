#ifndef IDOCSFACTORY_H
#define IDOCSFACTORY_H

#include "interface/IDocument.h"

/**
 * @brief Интерфейс фабрики документов.
 * Позволяет создать пустой документ или документ на основе данных
 * (PS возможно стоит разделить на 2 отдельных интерфейса)
 */

class IDocsFactory
{
public:
    virtual ~IDocsFactory() = default;

    /**
     * @brief Метод создания пустого документа
     *
     * @return указатель на созданный документа
     */
    virtual std::unique_ptr<IDocument> createEmptyDocument() = 0;

    /**
     * @brief Метод создания документа на основе данных
     *
     * @return указатель на созданный документ
     */
    virtual std::unique_ptr<IDocument> createFilledDocument(const std::string&) = 0;
};

#endif // IDOCSFACTORY_H
