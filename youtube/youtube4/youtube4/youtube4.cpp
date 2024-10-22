#include "youtube4.h"
#include "ui_youtube4.h"
// #include "secondwindow.h"

youtube4::youtube4(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::youtube4)
{
    ui->setupUi(this);
}

youtube4::~youtube4()
{
    delete ui;
}

void youtube4::on_pushButton_clicked()
{
    // SecondWindow window;
    // window.setModal(true);
    // window.exec();
    hide();
    window =new SecondWindow(this);
    window->show();
}

