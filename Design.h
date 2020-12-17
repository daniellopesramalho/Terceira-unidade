#ifndef DESIGN_H
#define DESIGN_H
#include "Sculptor.h"
#include <QWidget>

class Design : public QWidget
{
    Q_OBJECT
private:
    int nx=10,ny=10,nz=10;

public:
    explicit Design(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void setX(int);
    void setY(int);
    void setZ(int);
    Sculptor *dims;

signals:
    void posicaoMouse(int, int);

public slots:

};


#endif // DESIGN_H
