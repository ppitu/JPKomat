#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <filesystem>

#include "CommonCode/JPK/jpkv7.h"
#include "CommonCode/JPK/headline.h"
#include "CommonCode/JPK/Window/jpkwindow.h"

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


    JPKV7 jpk("../../JPKomat/source_test_file/test-headline.xml");

    auto z = jpk.getHeadline();



    ui->label->setText(z.getFormCode());
    ui->label_2->setText(z.getVariantForm());
    ui->label_3->setText(z.getDateOfCreation());
    ui->label_4->setText(z.getSystemName());
    ui->label_5->setText(QString::number(z.getPruposeOfDeposit()));
    ui->label_6->setText(z.getOfficeCode());
    ui->label_7->setText(QString::number(z.getYear()));
    ui->label_8->setText(QString::number(z.getMonth()));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString path = __FILE__;
    path = QString::fromStdString(std::filesystem::absolute(__FILE__));
    ui->label_9->setText(path);
}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{
    JpkWindow *jpk_window = new JpkWindow(this);
    jpk_window->exec();

   delete jpk_window;
}
