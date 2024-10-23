#ifndef YOUTUBE6P1_H
#define YOUTUBE6P1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class youtube6p1;
}
QT_END_NAMESPACE

class youtube6p1 : public QMainWindow
{
    Q_OBJECT

public:
    youtube6p1(QWidget *parent = nullptr);
    ~youtube6p1();

private:
    Ui::youtube6p1 *ui;
};
#endif // YOUTUBE6P1_H
