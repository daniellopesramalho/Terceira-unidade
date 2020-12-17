#include <cmath>
#include "cutsphere.h"
#include "Sculptor.h"

CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius){
    this->xcenter=xcenter;
    this->ycenter=ycenter;
    this->zcenter=zcenter;
    this->radius=radius;
}

CutSphere::~CutSphere(){

}

void CutSphere::draw(Sculptor &v){
    for(int i=xcenter;i<=radius;i++){
        for(int j=ycenter;j<=radius;j++){
            for(int k=zcenter;k<=radius;k++){
                if((pow((i-xcenter),2)+pow((j-ycenter),2)+pow((k-zcenter),2)) <= pow(radius,2)){
                    v.cutVoxel(i,j,k);
                }
            }
        }
    }
}
