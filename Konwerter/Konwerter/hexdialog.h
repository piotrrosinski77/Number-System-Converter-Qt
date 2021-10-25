#ifndef HEXDIALOG_H
#define HEXDIALOG_H

#include <QDialog>

namespace Ui {
class HEXDialog;
}

class HEXDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HEXDialog(QWidget *parent = nullptr);
    ~HEXDialog();

private:
    Ui::HEXDialog *ui;
};

#endif // HEXDIALOG_H
