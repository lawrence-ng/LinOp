#ifndef LINOP
#define LINOP

#include "Equation.h"
#include <vector>
#include <tuple>

class LinOp
{
public:
	void addEquation(Equation e);
private:
	std::vector<Equation*> m_equations;
	std::vector<std::vector<int>> findOptimums()
	{
		if (m_equations.size() <= 1) return std::vector<std::vector<int>>();
		for (int i = 0; i < m_equations.size(); i++)
		{

		}
	}
};

#endif