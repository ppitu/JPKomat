#include "jpkreader.h"

#include <QtXml>
#include <QFile>

JPKReader::JPKReader()
{

}

bool JPKReader::readHeadline(Headline& headline)
{
    QDomDocument xmlBOM;

    QFile f("jpk.xml");

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
            }

            if(Child.tagName() == "WariantFormularza")
            {
                headline.setVariantForm(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "DataWytworzeniaJPK")
            {
                headline.setDateOfCreation(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "NazwaSystemy")
            {
                headline.setSystemName(Child.firstChild().toText().data());
            }

            if(Child.tagName() == "CelZlozenia")
            {
                headline.setPruposeOfDeposit(Child.firstChild().toText().data().toInt());
            }

            if(Child.tagName() == "KodUrzedu")
            {
                headline.setOfficeCode(Child.firstChild().toText().data().toInt());
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
