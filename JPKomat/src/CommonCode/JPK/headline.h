#ifndef HEADLINE_H
#define HEADLINE_H

#include <QtXml>

#include <QFile>

class Headline
{
public:
    Headline();

    void setFormCode(QString value = "");
    void setVariantForm(QString value = "");
    void setDateOfCreation(QString value = "");
    void setSystemName(QString value = "");
    void setPruposeOfDeposit(int value = 0);
    void setOfficeCode(int value = 0);
    void setYear(int value = 0);
    void setMonth(int value = 0);

    QString getFormCode() const;
    QString getVariantForm() const;
    QString getDateOfCreation() const;
    QString getSystemName() const;
    int getPruposeOfDeposit() const;
    int getOfficeCode() const;
    int getYear() const;
    int getMonth() const;


private:
    QString m_formCode;
    QString m_variantForm;
    QString m_dateOfCreation;
    QString m_systemName;
    int m_pruposeOfDeposit;
    int m_officeCode;
    int m_year;
    int m_month;
};

#endif // HEADLINE_H
