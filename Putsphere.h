#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "Sculptor.h"

class PutSphere:public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius;
    float r,g,b,a;
public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    virtual ~PutSphere();
    void draw(Sculptor &v);
};

#endif // PUTSPHERE_H
