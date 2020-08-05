#include "Equation.h"

Equation::Equation(int params[], int n, unsigned short comparisonOperator) : m_comparisonOperator(comparisonOperator)
{
	for (int i = 0; i < n; i++)
	{
		m_coefficients.push_back(params[i]);
	}
}