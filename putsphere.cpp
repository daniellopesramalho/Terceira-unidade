#include "putsphere.h"
#include <iostream>

Putsphere::Putsphere(int xc,int yc,int zc, int radius, float r, float g, float b, float a){
    this->xc=xc;this->yc=yc;this->zc=zc;this->radius=radius;
    this->r=r;this->g=g;this->b=b;this->a=a;
}

void Putsphere::draw(Sculptor &s){
    double calc;
    int x,y,z;
    calc = radius*radius;
    s.setColor(r,g,b,a);
    for(x=xc-radius;x<xc+radius;x++){
        for(y=yc-radius;y<yc+radius;y++){
            for(z=zc-radius;z<zc+radius;z++){
                if(static_cast<double>(x-xc)*static_cast<double>(x-xc)+
                        if(static_cast<double>(y-yc)*static_cast<double>(y-yc)+
                           if(static_cast<double>(z-zc)*static_cast<double>(z-zc)<calc){
                           s.putvoxel(x,y,z);
            }
            }
        }
    }
}
