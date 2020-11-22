#include "jpkv7reader.h"


#include <iostream>
#include <QtXml>
#include <QFile>

JPKV7Reader::JPKV7Reader(QString pathToFile) : m_pathToFile(pathToFile), f(pathToFile)
{
    if(!f.open(QIODevice::ReadOnly))
    {
        throw "Cannot open file (jpkv7reader.cpp)";
    }

    xmlBOM.setContent(&f);
    f.close();

    root = xmlBOM.documentElement();



}

bool JPKV7Reader::readHeadline(Headline& headline)
{
    m_headline = root.firstChild().toElement();

    if(m_headline.tagName() == "Naglowek")
    {
        QDomElement Child = m_headline.firstChild().toElement();

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

    //root = ;

    return true;
}

bool JPKV7Reader::readEntity(Entity& entity)
{
    m_entity = root.firstChildElement("Podmiot1");

    if(m_entity.tagName() == "Podmiot1")
    {
        QDomElement TypeOfEntity = m_entity.firstChild().toElement();

        if(TypeOfEntity.tagName() == "OsobaFizyczna")
        {

            QDomElement Child = TypeOfEntity.firstChild().toElement();

            std::cout << Child.tagName().toStdString();

            while(!Child.isNull())
            {
                if(Child.tagName() == "etd:NIP")
                {
                    entity.setNIP(Child.firstChild().toText().data().toInt());
                }

                if(Child.tagName() == "etd:ImiePierwsze")
                {
                    entity.setFirstName(Child.firstChild().toText().data());
                }

                if(Child.tagName() == "etd:Nazwisko")
                {
                    entity.setLastName(Child.firstChild().toText().data());
                }

                if(Child.tagName() == "etd:DataUrodzenia")
                {
                    entity.setDateOfBirth(Child.firstChild().toText().data());
                }

                if(Child.tagName() == "Email")
                {
                    entity.setEmail(Child.firstChild().toText().data());
                }

                if(Child.tagName() == "Telefon")
                {
                    entity.setPhone(Child.firstChild().toText().data());
                }

                Child = Child.nextSibling().toElement();
            }
        }

    } else {
    std::cout << "nie dziala";
    }

    root = root.nextSibling().toElement();

    return true;
}
