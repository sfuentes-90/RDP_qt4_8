#ifndef TRANSITIONDIALOG_H
#define TRANSITIONDIALOG_H

#include <QDialog>

namespace Ui {
class TransitionDialog;
}

class TransitionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransitionDialog(QWidget *parent = 0);
    ~TransitionDialog();
    QString getName();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::TransitionDialog *ui;
};

#endif // TRANSITIONDIALOG_H
