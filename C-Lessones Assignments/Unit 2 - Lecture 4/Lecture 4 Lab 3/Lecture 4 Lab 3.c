/*
 * Lecture 4 Lab 3.c
 *
 *  Created on: 6 Aug 2022
 *      Author: Muhammad Osama
 */

/*
 * Write a program that transpose the matrix (3x3)
 */

#include<stdio.h>

int main()
{
	float user_matrix [3][3];
	float trans_matrix [3][3];
	int row_n;
	int col_n;

	for (row_n = 0 ; row_n < 3;row_n++)
	{
		for (col_n = 0 ; col_n < 3;col_n++)
		{
			printf("Enter your item (%d,%d)",row_n,col_n);
			fflush(stdin); fflush(stdout);
			scanf("%f",&user_matrix[row_n][col_n]);
		}
	}
	printf("The matrix\n");
	fflush(stdin); fflush(stdout);
	for (row_n = 0 ; row_n < 3;row_n++)
	{
		for (col_n = 0 ; col_n < 3;col_n++)
		{
			printf("%.2f ",user_matrix[row_n][col_n]);
			fflush(stdin); fflush(stdout);
		}
		printf("\n");
		fflush(stdin); fflush(stdout);
	}
	for (row_n = 0 ; row_n <3;row_n++)
	{
		for (col_n = 0 ; col_n < 3;col_n++)
		{
			trans_matrix[row_n][col_n]= user_matrix [col_n][row_n];
		}

	}
	printf("The transpose matrix\n");
	fflush(stdin); fflush(stdout);
	for (row_n = 0 ; row_n <3;row_n++)
	{
		for (col_n = 0 ; col_n < 3;col_n++)
		{
			printf("%.2f ",trans_matrix[row_n][col_n]);
			fflush(stdin); fflush(stdout);
		}
		printf("\n");
		fflush(stdin); fflush(stdout);
	}
}
