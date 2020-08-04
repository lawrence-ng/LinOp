#include "LinOp.h"
#include <string>

void LinOp::addEquation(Equation e)
{
	m_equations.push_back(&e);
}