#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "Sculptor.h"


class CutEllipsoid:public FiguraGeometrica{
protected:
        int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    virtual ~CutEllipsoid();
    void draw(Sculptor &v);
};

#endif // CUTELLIPSOID_H
