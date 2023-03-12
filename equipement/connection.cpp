#include "connection.h"
#include <QDebug>
#include <QMessageBox>

Connection::Connection()
{
}
    bool Connection::createconnect()
    {bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("pc");
    db.setUserName("khalil");//inserer nom de l'utilisateur
    db.setPassword("khalil");//inserer mot de passe de cet utilisateur

    if (db.open())
    test=true;





        return  test;
}
