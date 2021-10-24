#ifndef OCTDIALOG_H
#define OCTDIALOG_H

#include <QDialog>

namespace Ui {
class OCTDialog;
}

class OCTDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OCTDialog(QWidget *parent = nullptr);
    ~OCTDialog();

private:
    Ui::OCTDialog *ui;
};

#endif // OCTDIALOG_H
