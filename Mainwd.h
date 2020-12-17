#include "Mainwd.h"
#include "ui_Mainwd.h"
#include <cstdlib>
#include "dialogdimensoes.h"
#include "Sculptor.h"
#include <QDebug>
#include <QMessageBox>

using namespace std;

Mainwd::Mainwd(QWidget *parent)
    : QMainwd(parent)
    , ui(new Ui::Mainwd){
    ui->setupUi(this);

    connect(ui->actionDimensoes,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abreDimensoes()));
    connect(ui->actionSalvar,
            SIGNAL(triggered(bool)),
            this,
            SLOT (salvaArquivo()));

}

Mainwd::~Mainwd(){
    delete ui;
}

void Mainwd::fecharProg(){
    exit(0);
}

void Mainwd::abreDimensoes(){
    if(d.exec()==QDialog::Accepted){
        ui->widgetDesign->setX(d.leDimX());
        ui->widgetDesign->setY(d.leDimY());
        ui->horizontalSliderPlanoZ->setMaximum(d.leDimZ());
        ui->widgetDesign->dims->~Sculptor();
        ui->widgetDesign->dims = new Sculptor(d.leDimX(),d.leDimY(),d.leDimZ());
        repaint();
    }
}

void Mainwd::desenhaVoxel(){

}

void Mainwd::salvaArquivo(){
    ui->widgetDesign->dims->writeOFF("escultor.off");
}
