#include "TransitionDialog.h"
#include "ui_TransitionDialog.h"

TransitionDialog::TransitionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransitionDialog)
{
    ui->setupUi(this);
    // Comienza con una letra, siguen entre 0 y 10 letras, luego guion bajo y/o numeros
    QRegExp rx("^[A-Za-z][A-Za-z]{0,10}_{0,1}[0-9]{0,2}");
    ui->transitionName->setValidator(new QRegExpValidator(rx));
}

TransitionDialog::~TransitionDialog() {
    delete ui;
}

QString TransitionDialog::getName() {
    return ui->transitionName->text();
}

void TransitionDialog::on_buttonBox_accepted() {
    accept();
}

void TransitionDialog::on_buttonBox_rejected() {
    reject();
}