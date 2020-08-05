#include "LinOp.h"
#include <string>
#include <iostream>

void LinOp::addEquation(Equation e)
{
	m_equations.push_back(&e);
}

std::vector<std::vector<int>> LinOp::findOptimums()
{
    std::vector<std::vector<double>> opts;
	if (m_equations.size() <= 1) return std::vector<std::vector<int>>();
	for (unsigned int i = 0; i < m_equations.size(); i++)
    {
        for (unsigned int j = i + 1; j < m_equations.size(); j++)
        {
            if (this->isIntersection(*m_equations[i], *m_equations[j]))
            {
                opts.push_back(*intersection(*m_equations[i], *m_equations[j]));
            }
        }
	}
    for (int i = 0; i < m_equations.size(); i++)
    {
        for (int j = 0; j < opts.size(); j++)
        {
        }
    }
    double max = opts[0][1];
    for (int i = 1; i < opts.size(); i++)
    {
        if (opts[i][1] > max) max = opts[i][1];
    }
    for (int i = 0; i < opts.size(); i++)
    {
        if (opts[i][1] == max)
        {
            std::cout << opts[i][0] << ", " << opts[i][1] << std::endl;
        }
    }
};

/*
void LinOp::cofactor(int mat[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int temp[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int LinOp::det(int mat[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], int n)
{
    int D = 0;
    if (n == 1)
        return mat[0][0];
    int cofactors[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int sign = 1; 
    for (int f = 0; f < n; f++)
    {
        cofactor(mat, cofactors, 0, f, n);
        D += sign * mat[0][f] * det(cofactors, n - 1);
        sign = -sign;
    }
    return D;
}
*/

int LinOp::twoByTwoDet(int a, int b, int c, int d)
{
	return a * d - b * c;
}

bool LinOp::isIntersection(Equation e1, Equation e2)
{
    int determinant = twoByTwoDet(e1.m_coefficients[1], e1.m_coefficients[2], e2.m_coefficients[1], e2.m_coefficients[2]);
    if (determinant != 0) return true;
}

//temporarily only uses first two variables until support for n variables is added
std::vector<double>* LinOp::intersection(Equation e1, Equation e2)
{
    int determinant = twoByTwoDet(e1.m_coefficients[1], e1.m_coefficients[2], e2.m_coefficients[1], e2.m_coefficients[2]);
    if (determinant == 0) return nullptr;
    else
    {
        std::vector<double>* coords = new std::vector<double>;
        (*coords)[0] = (e1.m_coefficients[0] * e2.m_coefficients[2] - e2.m_coefficients[0] * e1.m_coefficients[2]) / determinant;
        (*coords)[1] = (e1.m_coefficients[1] * e2.m_coefficients[0] - e2.m_coefficients[1] * e1.m_coefficients[0]) / determinant;
    }
}