#include "jpkv7.h"

JPKV7::JPKV7(QString pathToFile) : m_pathToFile(pathToFile), m_jpkreader(pathToFile)
{
    m_jpkreader.readHeadline(m_headline);
    m_jpkreader.readEntity(m_entity);
}

Headline JPKV7::getHeadline()
{
    return m_headline;
}

Entity JPKV7::getEntity()
{
    return m_entity;
}
