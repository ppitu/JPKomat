#ifndef HEADLINE_H
#define HEADLINE_H

#include <QtXml>

#include <QFile>

class Headline
{
public:
    Headline();

    void setFormCode(QString value = "");
    void setSystemCode(QString value = "");
    void setDiagramVersion(QString value = "");
    void setVariantForm(QString value = "");
    void setDateOfCreation(QString value = "");
    void setSystemName(QString value = "");
    void setPruposeOfDeposit(int value = 0);
    void setPoz(QString value = "");
    void setOfficeCode(QString value = "");
    void setYear(int value = 0);
    void setMonth(int value = 0);

    QString getFormCode() const;
    QString getSystemCode() const;
    QString getDiagramVersion() const;
    QString getVariantForm() const;
    QString getDateOfCreation() const;
    QString getSystemName() const;
    int getPruposeOfDeposit() const;
    QString getPoz() const;
    QString getOfficeCode() const;
    int getYear() const;
    int getMonth() const;


private:
    QString m_formCode;
    QString m_systemCode;
    QString m_diagramVersion;
    QString m_poz;
    QString m_variantForm;
    QString m_dateOfCreation;
    QString m_systemName;
    int m_pruposeOfDeposit;
    QString m_officeCode;
    int m_year;
    int m_month;
};

#endif // HEADLINE_H
