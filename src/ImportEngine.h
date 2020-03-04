#ifndef IMPORTENGINE_H
#define IMPORTENGINE_H

#include "interfaces/IImportEngine.h"
#include "interfaces/IConfiguration.h"

class ImportEngine : public IImportEngine
{
public:
    ImportEngine(std::shared_ptr<IConfiguration>);

    std::shared_ptr<IDocument> importDocument(const std::string&) override;

private:
    std::shared_ptr<IConfiguration> _configuration;
};

#endif // IMPORTENGINE_H
