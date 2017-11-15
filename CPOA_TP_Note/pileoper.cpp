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

}
