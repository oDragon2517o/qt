#ifndef YOUTUBE5P1_H
#define YOUTUBE5P1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class youtube5p1;
}
QT_END_NAMESPACE

class youtube5p1 : public QMainWindow
{
    Q_OBJECT

public:
    youtube5p1(QWidget *parent = nullptr);
    ~youtube5p1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::youtube5p1 *ui;
};
#endif // YOUTUBE5P1_H
