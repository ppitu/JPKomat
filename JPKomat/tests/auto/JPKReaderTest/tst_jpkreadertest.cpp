#include <QtTest>

// add necessary includes here

#include "jpkreader.h"

class JPKReaderTest : public QObject
{
    Q_OBJECT

public:
    JPKReaderTest();
    ~JPKReaderTest();

private slots:
    void test_case1();

};

JPKReaderTest::JPKReaderTest()
{

}

JPKReaderTest::~JPKReaderTest()
{

}

void JPKReaderTest::test_case1()
{
    QString x = "test";
    QVERIFY(x == "test");
}

QTEST_APPLESS_MAIN(JPKReaderTest)

#include "tst_jpkreadertest.moc"
