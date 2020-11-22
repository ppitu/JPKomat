#include <QtTest>

// add necessary includes here

#include "jpkv7.h"
#include "jpkv7reader.h"
#include "entity.h"
#include "headline.h"

class jpkv7readerentity_test : public QObject
{
    Q_OBJECT

public:
    jpkv7readerentity_test();
    ~jpkv7readerentity_test();

private slots:
    void test_NIP();
    void test_firstName();
    void test_lastName();
    void test_dateOfBirth();
    void test_email();
    void test_phone();

private:
    JPKV7 m_jpk;
    Entity m_entity;

};

jpkv7readerentity_test::jpkv7readerentity_test() : m_jpk(QFINDTESTDATA("test_file/test-entity(person).xml"))
{
    m_entity = m_jpk.getEntity();
}

jpkv7readerentity_test::~jpkv7readerentity_test()
{

}

void jpkv7readerentity_test::test_NIP()
{
    QVERIFY(m_entity.getNIP() == 1111111111);
}

void jpkv7readerentity_test::test_firstName()
{
    QVERIFY(m_entity.getFirstName() == "Firma Test");
}

void jpkv7readerentity_test::test_lastName()
{
    QVERIFY(m_entity.getLastName() == "Kowalski");
}

void jpkv7readerentity_test::test_dateOfBirth()
{
    QVERIFY(m_entity.getDateOfBirth() == "1997-02-13");
}

void jpkv7readerentity_test::test_email()
{
    QVERIFY(m_entity.getEmail() == "test@test.com");
}

void jpkv7readerentity_test::test_phone()
{
    QVERIFY(m_entity.getPhone() == "666777888");
}


QTEST_APPLESS_MAIN(jpkv7readerentity_test)

#include "tst_jpkv7readerentity_test.moc"
