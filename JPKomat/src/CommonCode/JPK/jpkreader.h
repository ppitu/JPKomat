#ifndef JPKREADER_H
#define JPKREADER_H


#include "headline.h"

class JPKReader
{
public:
    JPKReader();

    bool readHeadline(Headline& headline);

};

#endif // JPKREADER_H
