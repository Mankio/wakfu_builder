#include "c_calcul.h"

c_calcul::c_calcul() {

}

int c_calcul::compute_reduction(const int resistances) const {
    int res;
    res = qFloor(100*(1-qPow(0.8,qreal(resistances)/100.0)));
    return res;
}
