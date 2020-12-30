#include <cmath>

#include "dod.h"
#include "sm.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSm::sm()
{
    n = 0;
    a = 1 / x;
    s = a;
    do
    {
        n++;
        dod();
        s += a;
    } while (abs(a) >= eps);

}