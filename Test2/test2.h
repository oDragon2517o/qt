#ifndef TEST2_H
#define TEST2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Test2;
}
QT_END_NAMESPACE

class Test2 : public QMainWindow
{
    Q_OBJECT

public:
    Test2(QWidget *parent = nullptr);
    ~Test2();

private:
    Ui::Test2 *ui;
};
#endif // TEST2_H
