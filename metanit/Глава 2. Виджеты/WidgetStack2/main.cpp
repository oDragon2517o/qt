#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget* widget = new QWidget;
    widget -> setWindowTitle("METANIT.COM");
    widget->setMinimumWidth(200);    // минимальная ширина виджета
    widget->setMinimumHeight(150);   // минимальная высота виджета
    // набор вложенных виджетов - кнопок
    QPushButton *btn1 = new QPushButton("Button 1");
    QPushButton *btn2 = new QPushButton("Button 2");
    QPushButton *btn3 = new QPushButton("Button 3");
    QPushButton *btn4 = new QPushButton("Button 4");

    // контейнер для расположения виджетов в ряд по вертикали
    QVBoxLayout *layout = new QVBoxLayout(widget);
    // добавляем виджеты в контейнер
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    layout->addWidget(btn3);
    layout->addWidget(btn4);

    widget->show();  // отображаем виджет
    return app.exec();
}
