#include "ImportEngine.h"
#include "Document.h"

#include <iostream>

ImportEngine::ImportEngine()
{}

std::shared_ptr<IDocument> ImportEngine::importDocument(const std::string&)
{
    std::cout << "ImportEngine::importDocument" << std::endl;

    return std::make_shared<Document>();
}
