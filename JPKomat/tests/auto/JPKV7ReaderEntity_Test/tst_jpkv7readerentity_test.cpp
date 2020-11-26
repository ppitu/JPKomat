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
    void test_fullName();
    void test_lastName();
    void test_dateOfBirth();
    void test_email();
    void test_phone();

private:
    JPKV7 m_jpk_person;
    JPKV7 m_jpk_company;
    Entity m_entity_person;
    Entity m_entity_company;

};

jpkv7readerentity_test::jpkv7readerentity_test() : m_jpk_person(QFINDTESTDATA("test_file/test-entity(person).xml")), m_jpk_company(QFINDTESTDATA("test_file/test-entity(company).xml"))
{
    m_entity_person = m_jpk_person.getEntity();
    m_entity_company = m_jpk_company.getEntity();
}

jpkv7readerentity_test::~jpkv7readerentity_test()
{

}

void jpkv7readerentity_test::test_NIP()
{
    QVERIFY(m_entity_person.getNIP() == 1111111111);
    QVERIFY(m_entity_company.getNIP() == 1111111111);
}

void jpkv7readerentity_test::test_firstName()
{
    QVERIFY(m_entity_person.getFirstName() == "Firma Test");
}

void jpkv7readerentity_test::test_fullName()
{
    QVERIFY(m_entity_company.getFullName() == "Test Firma");
}

void jpkv7readerentity_test::test_lastName()
{
    QVERIFY(m_entity_person.getLastName() == "Kowalski");
}

void jpkv7readerentity_test::test_dateOfBirth()
{
    QVERIFY(m_entity_person.getDateOfBirth() == "1997-02-13");
}

void jpkv7readerentity_test::test_email()
{
    QVERIFY(m_entity_person.getEmail() == "test@test.com");
    QVERIFY(m_entity_company.getEmail() == "test@test.com");
}

void jpkv7readerentity_test::test_phone()
{
    QVERIFY(m_entity_person.getPhone() == "666777888");
    QVERIFY(m_entity_company.getPhone() == "111222333");
}


QTEST_APPLESS_MAIN(jpkv7readerentity_test)

#include "tst_jpkv7readerentity_test.moc"
