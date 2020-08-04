#include "Equation.h"

Equation::Equation(int params[], int n, unsigned short comparisonOperator) : m_comparisonOperator(comparisonOperator)
{
	for (int i = 0; i < n; i++)
	{
		m_params.push_back(params[i]);
	}
}