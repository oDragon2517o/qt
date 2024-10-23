#include "youtube5p1.h"
#include "ui_youtube5p1.h"
#include <QMessageBox>
#include <QPixmap>

youtube5p1::youtube5p1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::youtube5p1)
{
    ui->setupUi(this);
    QPixmap pix(":/img/m1000x1000.jpg");
    int w=ui->image->width();
    int h=ui->image->height();

    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

youtube5p1::~youtube5p1()
{
    delete ui;
}

void youtube5p1::on_pushButton_clicked()
{
    QString login=ui->login->text();
    QString password=ui->pass->text();
    if(login == "Codi" && password == "test"){
        // QMessageBox::information(this, "Ура", "Вы успешно авторизовались!");
        ui->statusbar->showMessage("Вы успешно авторизовались!");

    }else {
        // QMessageBox::warning(this, "Авторизация", "Вы не успешно авторизовались!");
        ui->statusbar->showMessage("Вы не авторизовались!");
    }
}

