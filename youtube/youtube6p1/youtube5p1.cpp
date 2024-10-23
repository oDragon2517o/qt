#include "youtube5p1.h"
#include "ui_youtube5p1.h"

youtube5p1::youtube5p1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::youtube5p1)
{
    ui->setupUi(this);
}

youtube5p1::~youtube5p1()
{
    delete ui;
}


void youtube5p1::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        ui->statusbar->showMessage("Выбран Марк");
    }
    if(ui->radioButton_2->isChecked()){
        ui->statusbar->showMessage("Выбран Елоу");

    }
}


void youtube5p1::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        ui->statusbar->showMessage("Галочка поставлена");
    }else{
        ui->statusbar->showMessage("Галочка не поставлена");
    }
}

