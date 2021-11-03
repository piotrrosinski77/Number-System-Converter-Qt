#ifndef KONWERTER_H
#define KONWERTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Konwerter; }
QT_END_NAMESPACE

class Konwerter : public QMainWindow
{
    Q_OBJECT

public:
    Konwerter(QWidget *parent = nullptr);
    ~Konwerter();

private slots:
    void on_pushButton_clicked();
    void on_Quitbutton_clicked();
    void on_BINButton_clicked();

    void on_OCTButton_clicked();

    void on_HEXButton_clicked();

private:
    Ui::Konwerter *ui;
};
#endif // KONWERTER_H
