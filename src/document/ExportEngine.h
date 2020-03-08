#ifndef EXPORTENGINE_H
#define EXPORTENGINE_H

#include "interface/IExportEngine.h"

/**
 * @brief Реализация движка экспорта документов
 */

class ExportEngine : public IExportEngine
{
public:
    ExportEngine();
    std::string exportDocument(std::shared_ptr<IDocument> document) override;
};

#endif // EXPORTENGINE_H
