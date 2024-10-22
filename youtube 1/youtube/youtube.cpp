#include "youtube.h"
#include "ui_youtube.h"
#include <QMessageBox>
#include <QDebug>

youtube::youtube(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::youtube)
{
    ui->setupUi(this);
}

youtube::~youtube()
{
    delete ui;
}

void youtube::on_pushButton_2_clicked()
{
    ui->label->setText("Nashali");
}


void youtube::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Заголовок","Текст внутри просто", QMessageBox::Yes|QMessageBox::No);

    if(reply == QMessageBox::Yes){
        QApplication::quit();

    }else{
        qDebug()<<"Кнопка нерт была нажата";
    }
}

