#include <QtTest>
#include <iostream>

// add necessary includes here

#include "jpkv7reader.h"
#include "headline.h"
#include "entity.h"

class JPKV7ReaderHeadline_Test : public QObject
{
    Q_OBJECT

public:
    JPKV7ReaderHeadline_Test();
    ~JPKV7ReaderHeadline_Test();

private slots:
    void test_formCode();
    void test_systemCode();
    void test_diagramVersion();
    void test_variantForm();
    void test_dateOfCreation();
    void test_systemName();
    void test_pruposeOfDeposit();
    void test_poz();
    void test_officeCode();
    void test_year();
    void test_month();


private:
    //JPKV7 m_jpk;
    JPKV7Reader m_reader;
    Headline m_headline;
};

JPKV7ReaderHeadline_Test::JPKV7ReaderHeadline_Test() : m_reader(QFINDTESTDATA("test_file/test-headline.xml"))
{
    m_reader.readHeadline(m_headline);
}

JPKV7ReaderHeadline_Test::~JPKV7ReaderHeadline_Test()
{

}

void JPKV7ReaderHeadline_Test::test_formCode()
{
    QVERIFY(m_headline.getFormCode() == "JPK_VAT");
}

void JPKV7ReaderHeadline_Test::test_systemCode()
{
    QVERIFY(m_headline.getSystemCode() == "JPK_V7M (1)");
}

void JPKV7ReaderHeadline_Test::test_diagramVersion()
{
    QVERIFY(m_headline.getDiagramVersion() == "1-2E");
}

void JPKV7ReaderHeadline_Test::test_variantForm()
{
    QVERIFY(m_headline.getVariantForm() == "1");
}

void JPKV7ReaderHeadline_Test::test_dateOfCreation()
{
    QVERIFY(m_headline.getDateOfCreation() == "2020-11-11T11:46:42.1330519");
}

void JPKV7ReaderHeadline_Test::test_systemName()
{
    QVERIFY(m_headline.getSystemName() == "Formularz uproszczony");
}

void JPKV7ReaderHeadline_Test::test_pruposeOfDeposit()
{
    QVERIFY(m_headline.getPruposeOfDeposit() == 1);
}

void JPKV7ReaderHeadline_Test::test_poz()
{
    QVERIFY(m_headline.getPoz() == "P_7");
}

void JPKV7ReaderHeadline_Test::test_officeCode()
{
    QVERIFY(m_headline.getOfficeCode() == "0213");
}

void JPKV7ReaderHeadline_Test::test_year()
{
    QVERIFY(m_headline.getYear() == 2020);
}

void JPKV7ReaderHeadline_Test::test_month()
{
    QVERIFY(m_headline.getMonth() == 10);
}

QTEST_APPLESS_MAIN(JPKV7ReaderHeadline_Test)

#include "tst_jpkv7readerheadline_test.moc"
