#include "LinOp.h"

int main()
{
	LinOp lo;
	int e1[] = { 1, 2, 3 };
	int e2[] = { 2, 3, 1 };
	lo.addEquation(Equation(e1, 3, 1));
	lo.addEquation(Equation(e2, 3, 1));
}