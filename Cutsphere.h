#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "Sculptor.h"

class CutSphere:public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    virtual ~CutSphere();
    void draw(Sculptor &v);
};

#endif // CUTSPHERE_H
