#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "Sculptor.h"

using namespace std;

class CutVoxel:public FiguraGeometrica{
protected:
    int x,y,z; //posição do voxel no espaço
public:
    CutVoxel(int x, int y, int z);
    virtual ~CutVoxel();
    void draw(Sculptor &v);
};

#endif // CUTVOXEL_H
