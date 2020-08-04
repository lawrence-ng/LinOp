#ifndef PARAMETER
#define PARAMETER

#include <string>

class Parameter
{
public:
	Parameter(std::string name) :m_name(name) {}
private:
	std::string m_name;
};

#endif