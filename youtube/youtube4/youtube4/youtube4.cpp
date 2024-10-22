#include "youtube4.h"
#include "ui_youtube4.h"

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
