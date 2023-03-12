#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
//#include "equipement.h"
#include <QMainWindow>
#include "model_equipemnt.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Equipement; }
QT_END_NAMESPACE

class Equipement : public QMainWindow
{
    Q_OBJECT

public:
    Equipement(QWidget *parent = nullptr);
    ~Equipement();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_lineEdit_7_textChanged(const QString &arg1);

    void on_lineEdit_8_textChanged(const QString &arg1);

    void on_lineEdit_9_textChanged(const QString &arg1);

    void on_lineEdit_10_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Equipement *ui;
    //equip equ;
};
#endif // EQUIPEMENT_H
