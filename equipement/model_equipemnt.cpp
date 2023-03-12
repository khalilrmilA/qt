#include "model_equipemnt.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
equip::equip(){
    nom="";
    etat="";
}
equip::equip(int id_E,QString nom,int quantite,QDate DOA ,QString etat)
{
    this->nom=nom;
    this->id_E=id_E;
    this->quantite=quantite;
    this->DOA=DOA;
    this->etat=etat;
}

bool equip::ajouter_e(){

    QSqlQuery query;
   query.prepare("INSERT INTO EQUIPEMENT (IDEMP,NAME,QUANTITE,DATEACHAT,ETAT)"
       "VALUES (:id_E,:nom,:quantite,:DOA,:etat)");
   query.bindValue(":id_E",id_E);
   query.bindValue(":nom",nom);
    query.bindValue(":quantite",quantite);
    query.bindValue(":DOA",DOA);
    query.bindValue(":etat",etat);
  return query.exec();
};

QSqlQueryModel * equip::afficher_e(){

      QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery("select * from EQUIPEMENT");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_e"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("name"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("doa "));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    return model ;
               return model;
};
bool equip::supprimer_e(int id){

QSqlQuery query;
query.prepare("delete from EQUIPEMENT where IDEQUIP = :id");
query.bindValue(":id",id);
return query.exec();

};
bool equip::modifier_e(int id){

    QSqlQuery query;
    query.prepare("UPDATE EQUIPEMENT SET IDEMP=:id_E,NAME=:nom,QUANTITE=:quantite,DATEACHAT=:DOA,ETAT=:etat  WHERE IDEQUIP = :id");
    query.bindValue(":id",id);
    query.bindValue(":id_E",id_E);
    query.bindValue(":nom",nom);
       query.bindValue(":quantite",quantite);
         query.bindValue(":DOA",DOA);
           query.bindValue(":etat",etat);

           return query.exec();


};
QSqlQueryModel * equip::triernum()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY IDEMP");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_e"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("name"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("doa "));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    return model ;
    return model ;

}

QSqlQueryModel * equip::trierref()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY QUANTITE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_e"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("doa "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    return model ;
}
QSqlQueryModel * equip::trierdate()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY DATEACHAT");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_e"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("name"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("quantite"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("doa "));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    return model ;
}
