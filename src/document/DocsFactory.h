#ifndef DOCSFACTORY_H
#define DOCSFACTORY_H

#include "interface/IDocsFactory.h"

class DocsFactory : public IDocsFactory
{
public:
    DocsFactory();
    std::unique_ptr<IDocument> createEmptyDocument() override;
    std::unique_ptr<IDocument> createFilledDocument(const std::string &) override;
};

#endif // DOCSFACTORY_H
