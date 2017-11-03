#include "ArcDialog.h"
#include "ui_ArcDialog.h"

ArcDialog::ArcDialog(QWidget *parent) :  QDialog(parent), ui(new Ui::ArcDialog) {
    ui->setupUi(this);
    ui->preValue->setValidator(new QIntValidator(0, 100, this));
    ui->postValue->setValidator(new QIntValidator(0, 100, this));
}

ArcDialog::~ArcDialog() {
    delete ui;
}

QString ArcDialog::getPreValue(){
    return ui->preValue->text();
}

QString ArcDialog::getPostValue(){
    return ui->postValue->text();
}

void ArcDialog::on_buttonBox_accepted() {
    accept();
}

void ArcDialog::on_buttonBox_rejected() {
    reject();
}