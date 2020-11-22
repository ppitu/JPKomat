#ifndef ENTITY_H
#define ENTITY_H

#include <QtXml>

class Entity
{
public:
    Entity();

    void setNIP(int value = 0);
    void setFirstName(QString value = "");
    void setLastName(QString value = "");
    void setDateOfBirth(QString value = "");
    void setEmail(QString value = "");
    void setPhone(QString value = "");

    int getNIP() const;
    QString getFirstName() const;
    QString getLastName() const;
    QString getDateOfBirth() const;
    QString getEmail() const;
    QString getPhone() const;

private:
    int m_nip;
    QString m_firstName;
    QString m_lastName;
    QString m_dateOfBirth;
    QString m_email;
    QString m_phone;
};

#endif // ENTITY_H
