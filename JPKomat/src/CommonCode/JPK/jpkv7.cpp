#include "jpkv7.h"

JPKV7::JPKV7()
{
    m_jpkreader.readHeadline(m_headline);
}

Headline JPKV7::getHeadline()
{
    return m_headline;
}
