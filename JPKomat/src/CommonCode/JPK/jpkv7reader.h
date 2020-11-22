#ifndef JPKREADER_H
#define JPKREADER_H


#include "headline.h"
#include "entity.h"

class JPKV7Reader
{
public:
    JPKV7Reader(QString pathToFile);

    bool readHeadline(Headline& headline);
    bool readEntity(Entity& entity);

private:
    QString m_pathToFile;
    QDomDocument xmlBOM;
    QFile f;
    QDomElement root;
    QDomElement m_headline;
    QDomElement m_entity;

};

#endif // JPKREADER_H
