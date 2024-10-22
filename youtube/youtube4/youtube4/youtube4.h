#ifndef YOUTUBE4_H
#define YOUTUBE4_H

#include <QMainWindow>

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

private:
    Ui::youtube4 *ui;
};
#endif // YOUTUBE4_H
