#include "jpkv7.h"

#include <iostream>

JPKV7::JPKV7(QString pathToFile) : m_pathToFile(pathToFile), m_jpkreader(pathToFile)
{
    m_jpkreader.readHeadline(m_headline);
}

Headline JPKV7::getHeadline()
{
    return m_headline;
}
