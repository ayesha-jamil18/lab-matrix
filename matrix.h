#include <iostream>

using namespace std;

class matrix_calculator
{

public:
	int row;
	int coloumn;
	int matrix[2][2];

	matrix_calculator()
	{
		row = 2;
		coloumn = 2;
	}

	void get_matrix();
	void add_matrix(matrix_calculator, matrix_calculator);
	void sub_matrix(matrix_calculator, matrix_calculator);
	void mul_matrix(matrix_calculator, matrix_calculator);
	void get_matrix1(int a, int b, int c, int d);
	void printmat();

};

