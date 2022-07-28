/*
 * Lecture 3_Assignment 2_EX 4.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 * EX4: C Program to Check Whether a Number is Positive or Negative

This program takes a number from user and checks whether that number is either positive or negative or zero.

Output 1

Enter a number: 12.3
12.30 is positive.

Output 2

Enter a number: 0 You entered zero.
 *
 */

#include<stdio.h>
int main(void){
	float x; int y;
	do
	{
		printf("Enter a number: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&x);

		if (x < 0)
		{
			printf("%.2f is negative.",x);
			fflush(stdin); fflush(stdout);
			printf("\nPress 1 to continue\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}
		else if (x > 0)
		{
			printf("%.2f is positive.",x);
			fflush(stdin); fflush(stdout);
			printf("\nPress 1 to continue\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}
		else
		{
			printf("%.0f You entered zero.",x);
			fflush(stdin); fflush(stdout);
			printf("\nPress 1 to continue\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}
	}while (y == 1);
}
