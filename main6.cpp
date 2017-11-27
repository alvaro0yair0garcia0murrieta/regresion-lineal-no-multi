#include "regrecionlinea.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegrecionLinea w;
    w.show();

    return a.exec();
}
