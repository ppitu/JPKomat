#ifndef JPK_H
#define JPK_H

#include "headline.h"
#include "jpkreader.h"

class JPK
{
public:
    JPK();

    Headline getHeadline();
private:

private:
    Headline m_headline;

    JPKReader m_jpkreader;
};

#endif // JPK_H
