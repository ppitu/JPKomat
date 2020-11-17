#ifndef JPK_H
#define JPK_H

#include "headline.h"
#include "jpkv7reader.h"

class JPKV7
{
public:
    JPKV7(QString pathToFile);

    Headline getHeadline();
private:

private:
    QString m_pathToFile;

    Headline m_headline;

    JPKV7Reader m_jpkreader;
};

#endif // JPK_H
