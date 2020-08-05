#ifndef LINOP
#define LINOP

#include "Equation.h"
#include <vector>
#include <tuple>
#include "globals.h"

class LinOp
{
public:
	LinOp();
	void addEquation(Equation e);
private:
	std::vector<Equation*> m_equations;
	Equation m_result;
	bool m_min;
	std::vector<std::vector<int>> findOptimums();
	//int det(int mat[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int n);
	//void cofactor(int mat[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int temp[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int p, int q, int n);
	int twoByTwoDet(int a, int b, int c, int d);
	std::vector<double>* intersection(Equation e1, Equation e2);
	bool isIntersection(Equation e1, Equation e2);
};

#endif