#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"

TEST(AdditionTest, Blah ){
	matrix_calculator m1;
	m1.get_matrix1(2,2,2,2);
	matrix_calculator m2;
	m2.get_matrix1(1, 1, 1, 1);
	matrix_calculator res;
	res.add_matrix(m1, m2);


  EXPECT_EQ(res.matrix[0][0],3 );
  EXPECT_EQ(res.matrix[0][1],3 );
  EXPECT_EQ(res.matrix[1][0],3 );
  EXPECT_EQ(res.matrix[1][1],3 );
}

TEST(SubtractionTest, Blah ){
	matrix_calculator m1;
	m1.get_matrix1(3, 3, 3, 3);
	matrix_calculator m2;
	m2.get_matrix1((1, 1, 1, 1);
	matrix_calculator res;
	res.sub_matrix(m1, m2);


  EXPECT_EQ(res.matrix[0][0],2 );
  EXPECT_EQ(res.matrix[0][1],2 );
  EXPECT_EQ(res.matrix[1][0],2 );
  EXPECT_EQ(res.matrix[1][1],2 );
}

TEST(MultiplyTest, Blah ){
	matrix_calculator m1;
	m1.get_matrix1(2, 2, 2, 2);
	matrix_calculator m2;
	m2.get_matrix1(2, 2, 2, 2);
	matrix_calculator res;
	res.mul_matrix(m1, m2);


  EXPECT_EQ(res.matrix[0][0],8 );
  EXPECT_EQ(res.matrix[0][1],8 );
  EXPECT_EQ(res.matrix[1][0],8 );
  EXPECT_EQ(res.matrix[1][1],8 );
}

TEST(MultAddTest, Blah){
	matrix_calculator m1;
	m1.get_matrix1(2, 2, 2, 2);
	matrix_calculator m2;
	m2.get_matrix1(2, 2, 2, 2);
	matrix_calculator m3;
	m3.get_matrix1(1, 1, 1, 1);
	matrix_calculator res;
	res.mul_matrix(m1, m2);
	matrix_calculator f_result;
	f_result.add_matrix(res, m3);

	EXPECT_EQ(f_result.matrix[0][0], 9);
	EXPECT_EQ(f_result.matrix[0][1], 9);
	EXPECT_EQ(f_result.matrix[1][0], 9);
	EXPECT_EQ(f_result.matrix[1][1], 9);

}

