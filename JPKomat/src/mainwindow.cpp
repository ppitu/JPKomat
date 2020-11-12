#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "CommonCode/JPK/jpk.h"
#include "CommonCode/JPK/headline.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    JPK jpk;

    auto z = jpk.getHeadline();

    ui->label->setText(z.getFormCode());
    ui->label_2->setText(z.getVariantForm());
    ui->label_3->setText(z.getDateOfCreation());
    ui->label_4->setText(z.getSystemName());
    ui->label_5->setText(QString::number(z.getPruposeOfDeposit()));
    ui->label_6->setText(QString::number(z.getOfficeCode()));
    ui->label_7->setText(QString::number(z.getYear()));
    ui->label_8->setText(QString::number(z.getMonth()));
}
