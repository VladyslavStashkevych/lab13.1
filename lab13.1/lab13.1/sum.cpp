// sum.cpp
#include <cmath>

#include "init.h"
#include "add.h"
#include "sum.h"

using namespace nsInit;
using namespace nsAdd;

void nsSum::Sum() {
	n = 2;
	a = pow(x, 3) / 6.;
	S = x + a;
	for (; abs(a) >= eps; n++) {
		Add();
		S += a;
	}
}