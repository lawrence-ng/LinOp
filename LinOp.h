#ifndef LINOP
#define LINOP

#include "Parameter.h"
#include "Equation.h"
#include <vector>
#include <tuple>

class LinOp
{
public:
private:
	std::vector<Equation*> m_equations;
	std::vector<std::tuple<int>> findOptimums()
	{
		if (m_equations.size() <= 1) return std::vector<std::tuple<int>>();
		for (int i = 0; i < m_equations.size(); i++)
		{

		}
	}
};

#endif