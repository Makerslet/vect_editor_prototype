#ifndef IMPORTENGINE_H
#define IMPORTENGINE_H

#include "interface/IImportEngine.h"

#include "interface/IDocsFactory.h"

/**
 * @brief Реализация движка импорта документов
 */

class ImportEngine : public IImportEngine
{
public:
    /**
     * @brief Конструктор движка
     *
     * @param docsFactory - фабрика для правильного создания документов
     */
    ImportEngine(std::shared_ptr<IDocsFactory> docsFactory);

    std::shared_ptr<IDocument> importDocument(const std::string&) override;

private:
    std::shared_ptr<IDocsFactory> _docsFactory;
};

#endif // IMPORTENGINE_H
