#include "datawindows.h"
#include "ui_datawindows.h"

dataWindows::dataWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dataWindows)
{
    ui->setupUi(this);
}

dataWindows::~dataWindows()
{
    delete ui;
}

void dataWindows::on_pushButton_closeSession_clicked()
{
    this->close();
}

