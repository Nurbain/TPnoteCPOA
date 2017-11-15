#include "pileoper.h"

float PileOper::compactSomme(){
    float sum = 0;

    while ((*this).empty() != 1) {
        sum = sum + (*this).head();
        (*this).pop();
    }

    return sum;
}

PileOper PileOper::operator*(const PileOper& p){
    PileOper newPile;

    assert(p.nbr_elem == (*this).nbr_elem);

    for(int i=0;i<p.nbr_elem;i++){
        newPile.push(p(i)*(*this)(i));
    }

    (*this) = newPile;
    return (*this);
}
