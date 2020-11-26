#include "jpkwindow.h"
#include "ui_jpkwindow.h"

JpkWindow::JpkWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JpkWindow)
{
    ui->setupUi(this);
}

JpkWindow::~JpkWindow()
{
    delete ui;
}
