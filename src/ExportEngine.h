#ifndef EXPORTENGINE_H
#define EXPORTENGINE_H

#include "interfaces/IExportEngine.h"

class ExportEngine : public IExportEngine
{
public:
    ExportEngine();
    std::string exportDocument(std::shared_ptr<IDocument> document) override;
};

#endif // EXPORTENGINE_H
