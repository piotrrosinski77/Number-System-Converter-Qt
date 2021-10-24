#include "hexdialog.h"
#include "ui_hexdialog.h"

HEXDialog::HEXDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HEXDialog)
{
    ui->setupUi(this);
}

HEXDialog::~HEXDialog()
{
    delete ui;
}
