#ifndef WIDGETSTACK_H
#define WIDGETSTACK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class WidgetStack;
}
QT_END_NAMESPACE

class WidgetStack : public QMainWindow
{
    Q_OBJECT

public:
    WidgetStack(QWidget *parent = nullptr);
    ~WidgetStack();

private:
    Ui::WidgetStack *ui;
};
#endif // WIDGETSTACK_H
