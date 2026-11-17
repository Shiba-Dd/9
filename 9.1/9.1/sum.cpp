#include <cmath>
#include "sum.h"
#include "dod.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    const double PI_2 = std::acos(-1) / 2; 

    n = 0;
    a = -1 / x;
    s = PI_2 + a;

    while (std::fabs(a) >= eps) {
        n++;
        dod();
        s += a;
    }
    n++;
}