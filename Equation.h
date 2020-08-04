#ifndef EQUATION
#define EQUATION

#include <vector>

class Equation
{
public:
	Equation(int params[], int n, unsigned short comparisonOperator);
private:
	std::vector<int> m_params;
	int m_comparisonOperator;
};

#endif