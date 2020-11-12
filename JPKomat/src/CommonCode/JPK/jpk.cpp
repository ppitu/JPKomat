#include "jpk.h"

JPK::JPK()
{
    m_jpkreader.readHeadline(m_headline);
}

Headline JPK::getHeadline()
{
    return m_headline;
}
