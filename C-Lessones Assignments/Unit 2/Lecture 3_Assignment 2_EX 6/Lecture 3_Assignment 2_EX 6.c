/*
 * Lecture 3_Assignment 2_EX 6.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 *
EX6: C Program to Calculate Sum of Natural Numbers

Positive integers 1, 2, 3, 4... are known as natural numbers. This program takes a positive integer
from user( suppose user entered n) then, this program displays the value of 1+2+3+....n.

Output

Enter an integer: 100 Sum= 5050
 *
 */

#include<stdio.h>

int main(void){
	int x,y,z,sum;
	do
	{
		printf("Enter an integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&z);
		sum = 0;
		for (x = 1;x <= z;x++ )
		{
			sum = sum + x;
		}
		printf("Sum = %d\n",sum);
		fflush(stdin); fflush(stdout);
		printf("To continue Press 0\nOr Press any key to Exit");
		fflush(stdin); fflush(stdout);
		scanf("%d",&y);

	}while (y == 0);
}
