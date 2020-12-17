#include "cutvoxel.h"

CutVoxel::CutVoxel(int mx, int my, int mz){

    x=mx; y=my; z=mz;
}

void CutVoxel::draw(Sculptor &s){
    s.cutVoxel(x,y,z);
}
