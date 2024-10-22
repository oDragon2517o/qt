#ifndef QVBOXLAYOUTTEST_H
#define QVBOXLAYOUTTEST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QVBoxLayoutTest;
}
QT_END_NAMESPACE

class QVBoxLayoutTest : public QMainWindow
{
    Q_OBJECT

public:
    QVBoxLayoutTest(QWidget *parent = nullptr);
    ~QVBoxLayoutTest();

private:
    Ui::QVBoxLayoutTest *ui;
};
#endif // QVBOXLAYOUTTEST_H
