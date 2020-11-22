#ifndef JPK_H
#define JPK_H

#include "headline.h"
#include "entity.h"
#include "jpkv7reader.h"


class JPKV7
{
public:
    JPKV7(QString pathToFile);

    Headline getHeadline();
    Entity getEntity();
private:

private:
    QString m_pathToFile;

    Headline m_headline;
    Entity m_entity;

    JPKV7Reader m_jpkreader;
};

#endif // JPK_H
