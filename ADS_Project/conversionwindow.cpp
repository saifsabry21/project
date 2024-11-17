#include "conversionwindow.h"
#include "ui_conversionwindow.h"

ConversionWindow::ConversionWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ConversionWindow)
{
    ui->setupUi(this);
}

ConversionWindow::~ConversionWindow()
{
    delete ui;
}
