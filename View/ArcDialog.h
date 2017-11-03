#ifndef ARCDIALOG_H
#define ARCDIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class ArcDialog;
}

class ArcDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ArcDialog(QWidget *parent = 0);
    ~ArcDialog();
    QString getPreValue();
    QString getPostValue();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ArcDialog *ui;
};

#endif // ARCDIALOG_H
