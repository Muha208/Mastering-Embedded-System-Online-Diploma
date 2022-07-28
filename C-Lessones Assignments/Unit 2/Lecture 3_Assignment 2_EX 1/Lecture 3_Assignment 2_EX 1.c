/*
 * Lecture 3_Assignment 2_EX 1.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 * EX1: Write C Program to Check Whether a Number is Even or Odd

You should know those topics:
C Programming Operators
C Programming if, if ..elseand Nested if ...else Statement

The program idea
Numbers perfectly divisible by 2 are known even numbers and numbers which are not divisible by 2are called odd numbers. This program takes an integer from user and checks whether that number is even or odd and displays the result.
Output 1
Enter an integer you want to check: 25 25 is odd.
Output 2
Enter an integer you want to check: 12 12 is even.
 *
 */

#include<stdio.h>

int main(void){
	int x,y;
	do
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);

		if ((x % 2) == 0)
		{
			printf("%d is even.",x);
			fflush(stdin); fflush(stdout);
			printf("\nTo Exit Press 0");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}
		else
		{
			printf("%d is odd.",x);
			fflush(stdin); fflush(stdout);
			printf("\nPress ant Key to continue Or \nTo Exit Press 0 \n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&y);
		}

	}while (y != 0);
}
