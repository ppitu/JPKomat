#ifndef JPKWINDOW_H
#define JPKWINDOW_H

#include <QDialog>

namespace Ui {
class JpkWindow;
}

class JpkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit JpkWindow(QWidget *parent = nullptr);
    ~JpkWindow();

private:
    Ui::JpkWindow *ui;
};

#endif // JPKWINDOW_H
