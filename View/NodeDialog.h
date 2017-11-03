#ifndef NODEDIALOG_H
#define NODEDIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class NodeDialog;
}

class NodeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NodeDialog(QWidget *parent = 0);
    ~NodeDialog();
    QString getName();
    QString getWeight();


private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();


private:
    Ui::NodeDialog *ui;
};

#endif // NODEDIALOG_H
