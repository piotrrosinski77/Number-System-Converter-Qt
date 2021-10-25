#include "bindialog.h"
#include "ui_bindialog.h"

BINDialog::BINDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BINDialog)
{
    ui->setupUi(this);
}

BINDialog::~BINDialog()
{
    delete ui;
}
