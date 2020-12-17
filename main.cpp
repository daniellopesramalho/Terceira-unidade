#include <iostream>
#include <vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "interpretador.h"

int main(){
    Sculptor *s1;
    Sculptor s(30,20,30);

    Interpretador parser;

    std::vector<figurageometrica*>figs;
    figs= parser.parse("C:\Users\Daniel\Documents\projetounidade2\escultura.txt");
    s1 = new Sculptor(parser.getDimx(),parser.getDimy(),parser.getDimz());
    for (size_t i=0;i<figs.size;i++){
        std::cout<<"draw\n";
        figs[i]->draw*(s1);
    }
    s1->limpavoxels();
    s1->writeoff((char*)"C:\Users\Daniel\Documents\projetounidade2\saida.off")
            for (size_t i=0;i<figs.size;i++){
             delete figs[i];
    }
    delete s1;
    return 0;
}
