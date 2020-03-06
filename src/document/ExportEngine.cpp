#include "ExportEngine.h"

#include <iostream>

ExportEngine::ExportEngine()
{}

std::string ExportEngine::exportDocument(std::shared_ptr<IDocument>)
{
    std::cout << "ExportEngine::exportDocument()";
    return std::string();
}

