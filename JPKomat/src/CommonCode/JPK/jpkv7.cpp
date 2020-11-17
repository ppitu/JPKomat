#include "jpkv7.h"

JPKV7::JPKV7(QString pathToFile) : m_pathToFile(pathToFile), m_jpkreader(pathToFile)
{
}

Headline JPKV7::getHeadline()
{
    return m_headline;
}
