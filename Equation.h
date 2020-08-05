#ifndef EQUATION
#define EQUATION

#include <vector>

class Equation
{
public:
	Equation(int params[], int n, unsigned short comparisonOperator);
	std::vector<int> m_coefficients;
private:
	int m_comparisonOperator;
};

#endif