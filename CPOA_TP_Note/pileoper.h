#ifndef PILEOPER_H
#define PILEOPER_H

#include "pile.h"

class PileOper: public Pile<float>{

public:
    PileOper() : Pile<float>(){}
    PileOper(const Pile<float>& p) :  Pile(p){}

    float compactSomme();
    PileOper operator*(const PileOper& p);

};

#endif // PILEOPER_H
