#include "putbox.h"
#include <iostream>

putbox::putbox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a){
    this->x0 = x0;
    this->x0 = x0;
    this->x0 = x0;
    this->x0 = x0;
    this->x0 = x0;
    this->x0 = x0;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;

}

putbox::~putbox(){
    std::cout<<"destrutor putbox\n";

}

void putbox::draw(Sculptor &s){

    int x,y,z;
    s.setcolor(r,g,b,a);
    if(x0>x1)
        troca(x0,x1);
    if(y0>y1)
        troca(y0,y1);
    if(z0>z1)
        troca(z0,z1);
    if(x0<0)
        x0=0;
    for(x=x0;x<=x1;x++){
        for(y=y0;y<=y1;y++){
            for(z=z0;z<=z1;z++){
                s.putvoxel(x,y,z);
            }
        }
    }
}
