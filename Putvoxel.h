#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "Sculptor.h"
#include "figurageometrica.h"

using namespace std;

class PutVoxel:public FiguraGeometrica{
protected:
    int x,y,z; //posição do voxel no espaço
    float r,g,b,a; //cor do voxel
public:
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    virtual ~PutVoxel();
    void draw(Sculptor &v);
};

#endif // PUTVOXEL_H
