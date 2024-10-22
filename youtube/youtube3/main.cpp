#include "youtube.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    // QLabel *label = new QLabel("Привет");
    // label->resize(400,400);
    // label->show();
    QApplication a(argc, argv);
    youtube w;
    w.show();

    return a.exec();
}
