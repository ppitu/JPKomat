#ifndef JPKREADER_H
#define JPKREADER_H


#include "headline.h"

class JPKV7Reader
{
public:
    JPKV7Reader(QString pathToFile);

    bool readHeadline(Headline& headline);

private:
    QString m_pathToFile;
    QDomDocument xmlBOM;
    QFile f;
    QDomElement root;
    QDomElement m_headline;

};

#endif // JPKREADER_H
