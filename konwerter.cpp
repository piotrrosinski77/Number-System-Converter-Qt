#include "konwerter.h"
#include "ui_konwerter.h"
#include<QMessageBox>
#include "bindialog.h"
#include "octdialog.h"
#include "hexdialog.h"
#include <QPixmap>

Konwerter::Konwerter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Konwerter)
{
    ui->setupUi(this);
    this->setWindowTitle("Konwerter Systemów Liczbowych");
    ui->statusBar->addPermanentWidget(ui->label_3);
}


Konwerter::~Konwerter()
{
    delete ui;
}


void Konwerter::on_pushButton_clicked()
{
    QMessageBox::about(this, "Wynik działania", "11111");
}

void Konwerter::on_Quitbutton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Quit", "Czy na pewno chcesz opuścić aplikację?",
                                  QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes) {
        QApplication::quit();
    }
        else {

    }
}

void Konwerter::on_BINButton_clicked()
{
    BINDialog binDialog;
    binDialog.setModal(true);
    binDialog.setWindowTitle("BIN");
    binDialog.exec();
}



void Konwerter::on_OCTButton_clicked()
{
        OCTDialog octDialog;
        octDialog.setModal(true);
        octDialog.setWindowTitle("OCT");
        octDialog.exec();
}


void Konwerter::on_HEXButton_clicked()
{
    HEXDialog hexDialog;
    hexDialog.setModal(true);
    hexDialog.setWindowTitle("HEX");
    hexDialog.exec();
}

