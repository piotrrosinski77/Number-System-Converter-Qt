#include "konwerter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Konwerter w;
    w.show();
    return a.exec();
}
