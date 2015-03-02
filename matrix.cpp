#include <iostream>
#include "matrix.h"

using namespace std;



void matrix_calculator::get_matrix()
{
   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
         cin >> matrix[i][j];
		cout << endl;	
}



void matrix_calculator::addmat(matrix_calculator first, matrix_calculator second)
{
	   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
        matrix[i][j]=first.matrix[i][j]+second.matrix[i][j];
		cout << endl;
}

void matrix_calculator::submat(matrix_calculator first, matrix_calculator second)
{
	  for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
 		matrix[i][j] = first.matrix[i][j] - second.matrix[i][j];	
}

void matrix_calculator::mulmat(matrix_calculator first, matrix_calculator second)
{
	for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
	 matrix[i][j] = first.matrix[i][j] * second.matrix[i][j];
}

void matrix_calculator::printmat()
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < coloumn; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	matrix_calculator m1;
	matrix_calculator m2;
	matrix_calculator result;
int opt;

cout<<"Enter values "<<endl;
cout<<"First Matrix"<<endl;
m1.get_matrix();
cout<<"Second Matrix"<<endl;
m2.get_matrix();

cout<<"enter options "<<endl;
cout<<"1. Add"<<endl;
cout<<"2. Subtract"<<endl;
cout<<"3. Multiplication"<<endl;
cin >> opt;

switch (opt){

	case 1:
	{
		result.addmat(m1, m2);
	break;
	}

	case 2:
	{
		result.submat(m1, m2);
	break;
	}

	case 3:
	{
		result.mulmat(m1, m2);
	break;
	}
}

result.printmat();	
}