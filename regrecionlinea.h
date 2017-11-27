#ifndef REGRECIONLINEA_H
#define REGRECIONLINEA_H

#include <QMainWindow>

namespace Ui {
class RegrecionLinea;
}

class RegrecionLinea : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegrecionLinea(QWidget *parent = 0);
    ~RegrecionLinea();

private:
    Ui::RegrecionLinea *ui;
public slots://we declare the funtions in here :)
    void metodo6();
    void borrar();
};
#endif // REGRECIONLINEA_H
