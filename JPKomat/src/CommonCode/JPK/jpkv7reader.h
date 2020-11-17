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

};

#endif // JPKREADER_H
