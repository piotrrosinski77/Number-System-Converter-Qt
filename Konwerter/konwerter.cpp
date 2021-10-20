#include "konwerter.h"
#include "ui_konwerter.h"
#include<QMessageBox>
#include<QPixmap>

Konwerter::Konwerter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Konwerter)
{
    ui->setupUi(this);
}

Konwerter::~Konwerter()
{
    delete ui;
}


void Konwerter::on_BINButton_clicked()
{

}


void Konwerter::on_OCTButton_clicked()
{

}


void Konwerter::on_HEXButton_clicked()
{

}


void Konwerter::on_buttonBox_accepted()
{

}


void Konwerter::on_buttonBox_rejected()
{

}

