#include "octdialog.h"
#include "ui_octdialog.h"

OCTDialog::OCTDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OCTDialog)
{
    ui->setupUi(this);
}

OCTDialog::~OCTDialog()
{
    delete ui;
}
