#include "equipement.h"
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Equipement w;
    Connection c;
    bool test= c.createconnect();
    if (test)
    w.show();
    return a.exec();
}
