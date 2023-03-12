#include "equipement.h"
#include "ui_equipement.h"
#include "model_equipemnt.h"
Equipement::Equipement(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equipement)
{
    ui->setupUi(this);
}

Equipement::~Equipement()
{
    delete ui;
}


void Equipement::on_pushButton_clicked()
{
    int  id_emp = ui->lineEdit->text().toInt();
    QString nom = ui->lineEdit_2->text();
    int quantite = ui->lineEdit_3->text().toInt();
    QDate date = ui->dateEdit->date();
    QString etat =ui->lineEdit_4->text();
    equip equip1(id_emp,nom,quantite,date,etat);
    equip1.ajouter_e();
    ui->tableView->setModel(equip1.afficher_e() );
    equip1.afficher_e();
}



void Equipement::on_pushButton_2_clicked()
{
    equip equipe;
    ui->tableView->setModel(equipe.afficher_e() );
}


void Equipement::on_pushButton_3_clicked()
{
    equip equipe;
        int  id = ui->lineEdit_5->text().toInt();
    equipe.supprimer_e(id);
}


void Equipement::on_pushButton_4_clicked()
{
    int  id_mo = ui->lineEdit_10->text().toInt();
    int  id_emp = ui->lineEdit_6->text().toInt();
    QString nom = ui->lineEdit_7->text();
    int quantite = ui->lineEdit_8->text().toInt();
    QDate date = ui->dateEdit->date();
    QString etat =ui->lineEdit_9->text();
    equip equip1(id_emp,nom,quantite,date,etat);
    equip1.modifier_e(id_mo);
}


void Equipement::on_pushButton_5_clicked()
{
    equip equip1;
    ui->tableView->setModel(equip1.triernum());
}



void Equipement::on_pushButton_6_clicked()
{
    equip equip1;
    ui->tableView->setModel(equip1.trierref());
}


void Equipement::on_pushButton_7_clicked()
{
    equip equip1;
    ui->tableView->setModel(equip1.trierdate());
}


void Equipement::on_lineEdit_7_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^a-zA-Z ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_7->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_7->setStyleSheet("background-color: red;");
            ui->lineEdit_7->show();
    }
            else
            {
                ui->lineEdit_7->setStyleSheet("background-color: green;");
                ui->lineEdit_7->show();
            }
}


void Equipement::on_lineEdit_8_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^0-9 ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_8->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_8->setStyleSheet("background-color: red;");
            ui->lineEdit_8->show();
    }
            else
            {
                ui->lineEdit_8->setStyleSheet("background-color: green;");
                ui->lineEdit_8->show();
            }
}


void Equipement::on_lineEdit_9_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^a-zA-Z ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_9->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_9->setStyleSheet("background-color: red;");
            ui->lineEdit_9->show();
    }
            else
            {
                ui->lineEdit_9->setStyleSheet("background-color: green;");
                ui->lineEdit_9->show();
            }
}


void Equipement::on_lineEdit_10_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^0-9 ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_10->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_10->setStyleSheet("background-color: red;");
            ui->lineEdit_10->show();
    }
            else
            {
                ui->lineEdit_10->setStyleSheet("background-color: green;");
                ui->lineEdit_10->show();
            }
}


void Equipement::on_lineEdit_5_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^0-9 ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_5->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_5->setStyleSheet("background-color: red;");
            ui->lineEdit_5->show();
    }
            else
            {
                ui->lineEdit_5->setStyleSheet("background-color: green;");
                ui->lineEdit_5->show();
            }
}


void Equipement::on_lineEdit_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^0-9 ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit->setStyleSheet("background-color: red;");
            ui->lineEdit->show();
    }
            else
            {
                ui->lineEdit->setStyleSheet("background-color: green;");
                ui->lineEdit->show();
            }
}


void Equipement::on_lineEdit_2_textChanged(const QString &arg1)
{

    QRegularExpression regex("[^a-zA-Z ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_2->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_2->setStyleSheet("background-color: red;");
            ui->lineEdit_2->show();
    }
            else
            {
                ui->lineEdit_2->setStyleSheet("background-color: green;");
                ui->lineEdit_2->show();
            }
}


void Equipement::on_lineEdit_3_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^0-9 ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_3->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_3->setStyleSheet("background-color: red;");
            ui->lineEdit_3->show();
    }
            else
            {
                ui->lineEdit_3->setStyleSheet("background-color: green;");
                ui->lineEdit_3->show();
            }
}


void Equipement::on_lineEdit_4_textChanged(const QString &arg1)
{
    QRegularExpression regex("[^a-zA-Z ]");

            QRegularExpressionMatch match = regex.match(ui->lineEdit_4->text());
            match.hasMatch();
            if(match.hasMatch()){
            ui->lineEdit_4->setStyleSheet("background-color: red;");
            ui->lineEdit_4->show();
    }
            else
            {
                ui->lineEdit_4->setStyleSheet("background-color: green;");
                ui->lineEdit_4->show();
            }
}


void Equipement::on_tableView_clicked(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("SELECT * FROM EQUIPEMENT WHERE IDEQUIP= :ID");
        qry.bindValue(":ID",val);
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_10->setText(qry.value(1).toString());
                ui->lineEdit_6->setText(qry.value(2).toString());
                ui->lineEdit_7->setText(qry.value(3).toString());
                ui->lineEdit_8->setText(qry.value(4).toString());
                ui->lineEdit_9->setText(qry.value(5).toString());

            }
        }
}

