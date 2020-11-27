#include "jpkwindow.h"
#include "ui_jpkwindow.h"

#include "CommonCode/JPK/headline.h"
#include "CommonCode/JPK/entity.h"

#include <QString>

JpkWindow::JpkWindow(Headline& headline, Entity& entity, QWidget *parent) :
    m_headline(headline), m_entity(entity), QDialog(parent),
    ui(new Ui::JpkWindow)
{
    ui->setupUi(this);

    initHeadline();
    initEntity();
}

JpkWindow::~JpkWindow()
{
    delete ui;
}

void JpkWindow::initHeadline() const
{
    ui->edtFormCode->setText(m_headline.getFormCode());
}

void JpkWindow::initEntity() const
{
    ui->edtNIP->setText(QString::number(m_entity.getNIP()));
    ui->edtName->setText(m_entity.getFirstName());
    ui->edtLastName->setText(m_entity.getLastName());

    ui->edtEmail->setText(m_entity.getEmail());
    ui->edtPhone->setText(m_entity.getPhone());

}

void JpkWindow::on_rbPerson_clicked()
{
    ui->framePerson->setVisible(true);
}

void JpkWindow::on_rbNoPerson_clicked()
{
    ui->framePerson->setVisible(false);
}
