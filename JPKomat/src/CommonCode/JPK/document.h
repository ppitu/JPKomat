#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "IDocument.h"

class Document : public IDocument
{
public:
    Document();

    virtual bool readDocument() = 0;
};

#endif // DOCUMENT_H
