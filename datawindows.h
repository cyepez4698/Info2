#ifndef DATAWINDOWS_H
#define DATAWINDOWS_H

#include <QDialog>

namespace Ui {
class dataWindows;
}

class dataWindows : public QDialog
{
    Q_OBJECT

public:
    explicit dataWindows(QWidget *parent = nullptr);
    ~dataWindows();

private slots:
    void on_pushButton_closeSession_clicked();

private:
    Ui::dataWindows *ui;
};

#endif // DATAWINDOWS_H
