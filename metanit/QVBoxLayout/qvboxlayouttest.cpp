#include "qvboxlayouttest.h"
#include "ui_qvboxlayouttest.h"

QVBoxLayoutTest::QVBoxLayoutTest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QVBoxLayoutTest)
{
    ui->setupUi(this);
}

QVBoxLayoutTest::~QVBoxLayoutTest()
{
    delete ui;
}
