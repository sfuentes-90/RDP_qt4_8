#include "NodeDialog.h"
#include "ui_NodeDialog.h"

NodeDialog::NodeDialog(QWidget *parent) : QDialog(parent), ui(new Ui::NodeDialog) {
    ui->setupUi(this);
    ui->nodeWeight->setValidator(new QIntValidator(0, 100, this));
    // Comienza con una letra, siguen entre 0 y 10 letras, luego guion bajo y/o numeros
    QRegExp rx("^[A-Za-z][A-Za-z]{0,10}_{0,1}[0-9]{0,2}");
    ui->nodeName->setValidator(new QRegExpValidator(rx));
}

NodeDialog::~NodeDialog() {
    delete ui;
}

void NodeDialog::on_buttonBox_accepted() {
    accept();
}

void NodeDialog::on_buttonBox_rejected() {
    reject();
}

QString NodeDialog::getName() {
    return ui->nodeName->text();
}

QString NodeDialog::getWeight() {
    return ui->nodeWeight->text();
}
