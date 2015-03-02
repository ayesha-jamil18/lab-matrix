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
	void addmat(matrix_calculator, matrix_calculator);
	void submat(matrix_calculator, matrix_calculator);
	void mulmat(matrix_calculator, matrix_calculator);
	void printmat();

};

