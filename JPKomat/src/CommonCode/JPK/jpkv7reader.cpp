#include "jpkv7reader.h"


#include <iostream>
#include <QtXml>
#include <QFile>

JPKV7Reader::JPKV7Reader(QString pathToFile) : m_pathToFile(pathToFile)
{

}

bool JPKV7Reader::readHeadline(Headline& headline)
{
    QDomDocument xmlBOM;

    QFile f(m_pathToFile);

    std::cout << m_pathToFile.toStdString() << "\n";

    if(!f.open(QIODevice::ReadOnly))
    {
        return false;
    }

    xmlBOM.setContent(&f);
    f.close();

    QDomElement root = xmlBOM.documentElement();

    QDomElement Headline = root.firstChild().toElement();

    if(Headline.tagName() == "Naglowek")
    {
        QDomElement Child = Headline.firstChild().toElement();

        while(!Child.isNull())
        {
            if(Child.tagName() == "KodFormularza")
            {
                headline.setFormCode(Child.firstChild().toText().data());
                headline.setSystemCode(Child.attribute("kodSystemowy", "No kodSystemowy"));
                headline.setDiagramVersion(Child.attribute("wersjaSchemy", "No wersjaSchemy"));
            }

            if(Child.tagName() == "WariantFormularza")
            {
                headline.setVariantForm(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "DataWytworzeniaJPK")
            {
                headline.setDateOfCreation(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "NazwaSystemu")
            {
                headline.setSystemName(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "CelZlozenia")
            {
                headline.setPruposeOfDeposit(Child.firstChild().toText().data().toInt());
                headline.setPoz(Child.attribute("poz", "No poz"));
            }

            if(Child.tagName() == "KodUrzedu")
            {
                headline.setOfficeCode(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "Rok")
            {
                headline.setYear(Child.firstChild().toText().data().toInt());
            }

            if(Child.tagName() == "Miesiac")
            {
                headline.setMonth(Child.firstChild().toText().data().toInt());
            }

            Child = Child.nextSibling().toElement();
        }
    }

    return true;
}
