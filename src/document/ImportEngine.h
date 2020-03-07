#ifndef IMPORTENGINE_H
#define IMPORTENGINE_H

#include "interface/IImportEngine.h"

#include "interface/IDocsFactory.h"

class ImportEngine : public IImportEngine
{
public:
    ImportEngine(std::shared_ptr<IDocsFactory>);

    std::shared_ptr<IDocument> importDocument(const std::string&) override;

private:
    std::shared_ptr<IDocsFactory> _docsFactory;
};

#endif // IMPORTENGINE_H
