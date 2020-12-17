#include "putvoxel.h"

putvoxel::putvoxel(int x, int y, int z, float r, float g, float b, float a){
    this->x=x; this->y=y; this->z=z;
    this->r=r; this->g=g; this->b=b; this->a=a;

}

void putvoxel::draw(Sculptor &s) {
    s.setcolor(r,g,b,a);
    s.putvoxel(x,y,z);
}
