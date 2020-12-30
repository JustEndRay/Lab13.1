#include "dod.h"
#include "var.h"
#include <cmath>
using namespace nsVar;

void nsDod::dod()
{
	a *= 1 / (n*pow(x,n));
}