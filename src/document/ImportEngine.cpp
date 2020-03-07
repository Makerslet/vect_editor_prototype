#include "ImportEngine.h"
#include "Document.h"

#include <iostream>

ImportEngine::ImportEngine(
        std::shared_ptr<IDocsFactory> docsFactory) :
    _docsFactory(docsFactory)
{}

std::shared_ptr<IDocument> ImportEngine::importDocument(const std::string& data)
{
    std::cout << "ImportEngine::importDocument" << std::endl;

    return _docsFactory->createFilledDocument(data);
}
