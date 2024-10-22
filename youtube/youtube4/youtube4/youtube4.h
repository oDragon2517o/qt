#ifndef YOUTUBE4_H
#define YOUTUBE4_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class youtube4;
}
QT_END_NAMESPACE

class youtube4 : public QMainWindow
{
    Q_OBJECT

public:
    youtube4(QWidget *parent = nullptr);
    ~youtube4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::youtube4 *ui;
    SecondWindow *window;
};
#endif // YOUTUBE4_H
