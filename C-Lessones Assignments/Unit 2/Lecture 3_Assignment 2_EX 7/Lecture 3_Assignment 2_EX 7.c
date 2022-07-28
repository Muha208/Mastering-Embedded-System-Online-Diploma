/*
 * Lecture 3_Assignment 2_EX 7.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 *
EX7: C Program to Find Factorial of a Number

For any positive number n, its factorial is given by: factorial= 1*2*3*4....n
If a number is negative, factorial does not exist and factorial of O is 1.
 *
This program takes an integer from a user. If user enters negative integer, this program wi11
display error message and if user enters non-negative integer, this program will display the
factorial of that number.


Output 1

Enter an integer: -5
Error!!! Factorial of negative number doesn't exist.

Output 2

Enter an integer: 10
Factorial= 3628800
 *
 */

#include<stdio.h>

int main(void){
	int x,y,z; long long int multi;
	do
	{
		printf("Enter an integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&z);
		multi = 1;
		if (z >= 0)
		{
			for (x = 1; x <= z; x++)
			{
				multi *= x;
			}
			printf("Factorial= %lli",multi);
			fflush(stdin); fflush(stdout);
			printf("\nTo continue press 0\nOr any key to Exit\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}else
		{
			printf("Error!!! Factorial of negative number doesn't exist.");
			fflush(stdin); fflush(stdout);
			printf("\nTo continue press 0\nOr any key to Exit\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}
	}while (y == 0);
}
