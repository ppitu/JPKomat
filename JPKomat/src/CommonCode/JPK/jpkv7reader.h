#ifndef JPKREADER_H
#define JPKREADER_H


#include "headline.h"

class JPKV7Reader
{
public:
    JPKV7Reader();

    bool readHeadline(Headline& headline);

};

#endif // JPKREADER_H
