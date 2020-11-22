#include "entity.h"

Entity::Entity()
{

}

void Entity::setNIP(int value)
{
    m_nip = value;
}

void Entity::setFirstName(QString value)
{
    m_firstName = value;
}

void Entity::setLastName(QString value)
{
    m_lastName = value;
}

void Entity::setDateOfBirth(QString value)
{
    m_dateOfBirth = value;
}

void Entity::setEmail(QString value)
{
    m_email = value;
}

void Entity::setPhone(QString value)
{
    m_phone = value;
}

int Entity::getNIP() const
{
    return m_nip;
}

QString Entity::getFirstName() const
{
    return m_firstName;
}

QString Entity::getLastName() const
{
    return m_lastName;
}

QString Entity::getDateOfBirth() const
{
    return m_dateOfBirth;
}

QString Entity::getEmail() const
{
    return m_email;
}

QString Entity::getPhone() const
{
    return m_phone;
}
