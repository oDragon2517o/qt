#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;
    widget.setMinimumSize(250, 150);
    widget.setWindowTitle("METANIT.COM");

    QPushButton* btn = new QPushButton("Click", &widget);
    btn->setGeometry(20, 10, 100, 30);

    widget.show();
    return app.exec();
}
