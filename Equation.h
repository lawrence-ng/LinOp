#ifndef EQUATION
#define EQUATION

#include "Parameter.h"

class Equation
{
public:
	Equation(Parameter params[], unsigned short comparisonOperator);
private:
	Parameter* m_params;
};

#endif