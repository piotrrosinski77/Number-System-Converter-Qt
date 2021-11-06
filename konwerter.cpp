#include "konwerter.h"
#include "ui_konwerter.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<iostream>

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

int NWD(long a, long b) {
    while(a!=b)
           if(a>b)
               a-=b;
           else
               b-=a;
        return a;
}



void Konwerter::on_BINButton_clicked()
{
    QFile file("C:/Users/bluep/OneDrive/Pulpit/Konwerter/raport.txt");

    if (!file.open(QFile::WriteOnly | QIODevice::Append)) {
        QMessageBox::warning(this, "Ostrzeżenie", "Plik nie został otworzony");
    }
    bool ok;
    QTextStream out(&file);
    QString str = ui->plainTextEdit->toPlainText();
    long str2 = str.toLong(&ok, 10);
    QString strBIN = QString::number(str2, 2);
    out << "Liczba podana dziesiętnie: ";
    out << str;
    out << "\n";
    out << "Liczba zapisana binarnie: ";
    out << strBIN;
    out << "\n\n";
    ui->label->setText(QString( "Liczba zapisana w systemie dwójkowym: %1 ").arg(strBIN));
    file.flush();
    file.close();
}



void Konwerter::on_OCTButton_clicked()
{
    QFile file("C:/Users/bluep/OneDrive/Pulpit/Konwerter/raport.txt");

    if (!file.open(QFile::WriteOnly | QIODevice::Append)) {
        QMessageBox::warning(this, "Ostrzeżenie", "Plik nie został otworzony");
    }
    bool ok;
    QTextStream out(&file);
    QString str = ui->plainTextEdit->toPlainText();
    long str2 = str.toLong(&ok, 10);
    QString strOCT = QString::number(str2, 8);
    out << "Liczba podana dziesiętnie: ";
    out << str;
    out << "\n";
    out << "Liczba zapisana ósemkowo: ";
    out << strOCT;
    out << "\n\n";
    ui->label->setText(QString( "Liczba zapisana w systemie ósemkowym: %1 ").arg(strOCT));
    file.flush();
    file.close();
}


void Konwerter::on_HEXButton_clicked()
{
    QFile file("C:/Users/bluep/OneDrive/Pulpit/Konwerter/raport.txt");

    if (!file.open(QFile::WriteOnly | QIODevice::Append)) {
        QMessageBox::warning(this, "Ostrzeżenie", "Plik nie został otworzony");
    }
    bool ok;
    QTextStream out(&file);
    QString str = ui->plainTextEdit->toPlainText();
    long str2 = str.toLong(&ok, 10);
    QString strHEXUpper = QString::number(str2, 16).toUpper();
    out << "Liczba podana dziesiętnie: ";
    out << str;
    out << "\n";
    out << "Liczba zapisana szesnastkowo: ";
    out << strHEXUpper;
    out << "\n\n";
    ui->label->setText(QString("Liczba zapisana w systemie szesnastkowym: %1").arg(strHEXUpper));
    file.flush();
    file.close();

}



void Konwerter::on_NWDButton_clicked()
{
    QFile  file("C:/Users/bluep/OneDrive/Pulpit/Konwerter/raport.txt");

    if (!file.open(QFile::WriteOnly | QIODevice::Append)) {
        QMessageBox::warning(this, "Ostrzeżenie", "Plik nie został otworzony");
    }
    bool ok;
    QTextStream out(&file);
    QString str = ui->plainTextEdit_2->toPlainText();
    QString str2 = ui->plainTextEdit_3->toPlainText();
    out << "Podane liczby: ";
    out << str;
    out << ", ";
    out << str2;
    out << "\n";
    long str3 = str.toLong(&ok, 10);
    long str4 = str2.toLong(&ok, 10);
    long NWDstr = NWD(str3,str4);
    out << "Największy wspólny dzielnik: ";
    out << NWD(str3,str4);
    out << "\n\n";
    ui->label->setText(QString( "Największy wspólny dzielnik wynosi: %1 ").arg(NWDstr));
    file.flush();
    file.close();
}


void Konwerter::on_NWWButton_clicked()
{
    QFile file("C:/Users/bluep/OneDrive/Pulpit/Konwerter/raport.txt");

    if (!file.open(QFile::WriteOnly | QIODevice::Append)) {
        QMessageBox::warning(this, "Ostrzeżenie", "Plik nie został otworzony");

}
    bool ok;
    QTextStream out(&file);
    QString str = ui->plainTextEdit_2->toPlainText();
    QString str2 = ui->plainTextEdit_3->toPlainText();
    out << "Podane liczby: ";
    out << str;
    out << ", ";
    out << str2;
    out << "\n";
    long str3 = str.toLong(&ok, 10);
    long str4 = str2.toLong(&ok, 10);
    long NWDstr = NWD(str3,str4);
    long NWWstr = str3*str4/NWDstr;
    out << "Najmniejsza wspólna wielokrotność: ";
    out << NWWstr;
    out << "\n\n";
    ui->label->setText(QString("Najmniejsza wspólna wielokrotność wynosi: %1 ").arg(NWWstr));
    file.flush();
    file.close();
}



