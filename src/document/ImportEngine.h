#ifndef IMPORTENGINE_H
#define IMPORTENGINE_H

#include "interface/IImportEngine.h"

#include "interface/IConfiguration.h"

class ImportEngine : public IImportEngine
{
public:
    ImportEngine();

    std::shared_ptr<IDocument> importDocument(const std::string&) override;
};

#endif // IMPORTENGINE_H
