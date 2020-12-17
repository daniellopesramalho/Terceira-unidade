#include "Design.h"
#include <QPainter> //usado para fazer o desenhda área
#include <QBrush> //usado para preencher a área de desenho
#include <QPen> // usado para trabalhar o contorno da área de desenho
#include <QMouseEvent>
#include "dialogdimensoes.h"


Desenho::Design(QWidget *parent) : QWidget(parent){
    dims = new Sculptor(nx,ny,nz);
    setMouseTracking(true);
}

void Design::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    brush.setColor(QColor(255,255,255)); //fundo branco
    brush.setStyle(Qt::SolidPattern); //cor solida
    pen.setColor(QColor(0,0,0)); //cor da caneta
    pen.setWidth(2); //pixels de largura do traço
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
    pen.setWidth(1);
    painter.setPen(pen);
    for(int i=0;i<=width();i+=width()/nx){
        for(int j=0;j<=height();j+=height()/ny){
            painter.drawRect(i,j,width()/nx,height()/ny);
        }
    }
}

void Design::mousePressEvent(QMouseEvent *event){
    emit posicaoMouse(event->x(), event->y());
}

void Design::setX(int nx){
    this->nx = nx;
}

void Design::setY(int ny){
    this->ny = ny;
}

void Design::setZ(int nz){
    this->nz = nz;
}
