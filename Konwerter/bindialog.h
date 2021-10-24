#ifndef BINDIALOG_H
#define BINDIALOG_H

#include <QDialog>

namespace Ui {
class BINDialog;
}

class BINDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BINDialog(QWidget *parent = nullptr);
    ~BINDialog();

private:
    Ui::BINDialog *ui;
};

#endif // BINDIALOG_H
