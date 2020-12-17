#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <queue>
#include "sculptor.h"

using namespace std;

void troca(int &x, int &y){
    int tmp;
    tmp=x; x=y; y=tmp;

}

sculptor::Sculptor(int _nx, int _ny, int _nz){
    int x,y,z;
    nx=_nx; ny=_ny; nz= _nz;
    r=g=b=a=0.5;

    v = new voxel**[nx];
    for(x=0; x<nx; x++){
        v[x]= new voxel*[ny];
    }
    for(x=0; x<nx; x++){
        for(y=0; x<ny; y++){
        v[x][y]= new voxel*[nz];
    }
    }
    for(x=0; x<nx; x++){
        for(y=0; x<ny; y++){
            for(z=0; x<nz; z++){
        v[x][y][z].is0n= false;

        v[x][y][z].r=r;
        v[x][y][z].g=g;
        v[x][y][z].b=b;
        v[x][y][z].a=a;
    }
    }
    }
}

void Sculptor::limpavoxels(void){
    std::queue<int> q;
    int x,y,z;
    int lx, ly, lz;
    for(x=1; x<xn;x++){
        for(y=1;y<ny;y++){
            for(z=1;z<zn;z++){
                if ((v[x][y][z].isOn==true)&&
                   (v[x+1][y][z].isOn==true)&&
                   (v[x-1][y][z].isOn==true)&&
                   (v[x][y+1][z].isOn==true)&&
                   (v[x][y-1][z].isOn==true)&&
                   (v[x][y][z+1].isOn==true)&&
                        (v[x][y][z-1].isOn==true)){
                    q.push(x);
                    q.push(y);
                    q.push(z    );
                }

            }
        }
    }
}

while(!q.empty()){
    lx=q.front();q.pop();
    ly=q.front();q.pop();
    lz=q.front();q.pop();
    v[lx][ly][lz].isOn == false;
}
}

void Sculptor::writeoff(char*nome){
    int total, index;
    int x, y, z;
    ofstream f;
    total=0;
    f.open(nome);
    f<<"OFF\n";
    for(x=0;x<nx;x++){
        for(y=0;y<ny;y++){
            for(z=0;z<nz;z++){
               if (v[lx][ly][lz].isOn == true){
                   total++;
               }
            }
        }
}
    f<<total*8<< " "<<total*6<<"0 \n";
    for(x=0;x<nx;x++){
        for(y=0;y<ny;y++){
            for(z=0;z<nz;z++){
               if (v[lx][ly][lz].isOn == true){
                   f<<  x-0.5 << " "<< y+0.5 << " " <<z-0.5<< " "<< std::flush;
                   f<<  x-0.5 << " "<< y-0.5 << " " <<z-0.5<< " "<< std::flush;
                   f<<  x+0.5 << " "<< y-0.5 << " " <<z-0.5<< " "<< std::flush;
                   f<<  x+0.5 << " "<< y+0.5 << " " <<z-0.5<< " "<< std::flush;
                   f<<  x-0.5 << " "<< y+0.5 << " " <<z+0.5<< " "<< std::flush;
                   f<<  x-0.5 << " "<< y-0.5 << " " <<z+0.5<< " "<< std::flush;
                   f<<  x+0.5 << " "<< y-0.5 << " " <<z+0.5<< " "<< std::flush;
                   f<<  x+0.5 << " "<< y+0.5 << " " <<z+0.5<< " "<< std::flush;
               }
            }
        }
}
    total=0;
    for(x=0;x<nx;x++){
        for(y=0;y<ny;y++){
            for(z=0;z<nz;z++){
               if (v[lx][ly][lz].isOn == true){
                   index=total*8;
                   f<<4<<" "<< index+0 << " " << index+3<<" "<< index+2 <<" "<< index+1;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   f<<4<<" "<< index+4 << " " << index+5<<" "<< index+6 <<" "<< index+7;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   f<<4<<" "<< index+0 << " " << index+1<<" "<< index+5 <<" "<< index+6;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   f<<4<<" "<< index+0 << " " << index+4<<" "<< index+7 <<" "<< index+3;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   f<<4<<" "<< index+3 << " " << index+7<<" "<< index+6 <<" "<< index+4;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   f<<4<<" "<< index+1 << " " << index+2<<" "<< index+6 <<" "<< index+4;
                   f<<v[lx][ly][lz].r<<" "<<v[lx][ly][lz.g<<" "<<v[lx][ly][lz].b<<" "<<v[lx][ly][lz].a;
                   total++;
               }
            }
        }
}

    f.close;
