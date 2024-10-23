#include "youtube6p1.h"
#include "ui_youtube6p1.h"

youtube6p1::youtube6p1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::youtube6p1)
{
    ui->setupUi(this);
}

youtube6p1::~youtube6p1()
{
    delete ui;
}
