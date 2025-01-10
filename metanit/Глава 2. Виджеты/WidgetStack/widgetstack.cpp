#include "widgetstack.h"
#include "ui_widgetstack.h"

WidgetStack::WidgetStack(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WidgetStack)
{
    ui->setupUi(this);
}

WidgetStack::~WidgetStack()
{
    delete ui;
}
