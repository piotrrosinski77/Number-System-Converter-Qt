#include "konwerter.h"
#include "ui_konwerter.h"
#include "bindialog.h"
#include "octdialog.h"
#include "hexdialog.h"
#include<QMessageBox>

Konwerter::Konwerter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Konwerter)
{
    ui->setupUi(this);
    this->setWindowTitle("Konwerter Systemów Liczbowych");
}


Konwerter::~Konwerter()
{
    delete ui;
}


void Konwerter::on_OKButton_clicked()
{
    if(ui->SaveCheckBox->isChecked()) {
    QMessageBox::about(this, "Informacja", "Zapis danych został wykonany pomyślnie.");
    }

    if(ui->CountCheckBox->isChecked()) {
        ui->statusBar->showMessage("Największy wspólny dzielnik to:                                         Najmniejsza wspólna wielokrotność to:", 6000);

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


