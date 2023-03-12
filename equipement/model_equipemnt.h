#ifndef MODEL_EQUIPEMNT_H
#define MODEL_EQUIPEMNT_H
#include "qdatetime.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class equip
{
    QDate DOA;
    QString nom;
    QString etat;
    int id_E,quantite;
public:

equip();
    equip(int id_E,QString nom,int quantite,QDate DOA ,QString etat);
    int getId(){return id_E;};
    QString getNom(){return nom;};
    int getQuantite(){return quantite;};
    QDate getDate(){return DOA;};
    QString getEtat(){return etat;};


    void setNom(QString n){nom = n; };
    void setEtat(QString n){etat = n; };
    void setDate(QDate n){DOA = n; };
    void setId(int n){id_E = n; };
    void setQuantite(int n){quantite = n; };



    bool ajouter_e();
    QSqlQueryModel * afficher_e();
    bool supprimer_e(int);
    bool modifier_e(int);
    QSqlQueryModel * triernum();
    QSqlQueryModel * trierref();
    QSqlQueryModel * trierdate();

};


#endif // MODEL_EQUIPEMNT_H
