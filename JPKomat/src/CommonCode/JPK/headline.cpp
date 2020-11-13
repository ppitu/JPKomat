#include "headline.h"

Headline::Headline()
{

}

void Headline::setFormCode(QString value)
{
    m_formCode = value;
}

void Headline::setVariantForm(QString value)
{
    m_variantForm = value;
}

void Headline::setDateOfCreation(QString value)
{
    m_dateOfCreation = value;
}

void Headline::setSystemName(QString value)
{
    m_systemName = value;
}

void Headline::setPruposeOfDeposit(int value)
{
    m_pruposeOfDeposit = value;
}

void Headline::setOfficeCode(QString value)
{
    m_officeCode = value;
}

void Headline::setYear(int value)
{
    m_year = value;
}

void Headline::setMonth(int value)
{
    m_month = value;
}

QString Headline::getFormCode() const
{
    return m_formCode;
}

QString Headline::getVariantForm() const
{
    return m_variantForm;
}

QString Headline::getDateOfCreation() const
{
    return m_dateOfCreation;
}

QString Headline::getSystemName() const
{
    return m_systemName;
}

int Headline::getPruposeOfDeposit() const
{
    return m_pruposeOfDeposit;
}

QString Headline::getOfficeCode() const
{
    return m_officeCode;
}

int Headline::getYear() const
{
    return m_year;
}

int Headline::getMonth() const
{
    return m_month;
}
