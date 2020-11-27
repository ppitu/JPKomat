#ifndef JPKWINDOW_H
#define JPKWINDOW_H

#include <QDialog>

class Entity;
class Headline;

namespace Ui {
class JpkWindow;
}

class JpkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit JpkWindow(Headline& headline, Entity& entity, QWidget *parent = nullptr);
    ~JpkWindow();

private slots:
    void on_rbPerson_clicked();

    void on_rbNoPerson_clicked();

private:

    void initHeadline() const;
    void initEntity() const;

    Headline& m_headline;
    Entity& m_entity;

    Ui::JpkWindow *ui;
};

#endif // JPKWINDOW_H
