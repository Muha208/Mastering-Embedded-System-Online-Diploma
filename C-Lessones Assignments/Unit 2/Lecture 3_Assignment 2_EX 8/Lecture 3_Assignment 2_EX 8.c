/*
 * Lecture 3_Assignment 2_EX 8.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 * EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

This program takes an arithmetic operator ( +, -, *, /) and two operands from an user and performs
the operation on those two operands depending upon the operator entered by user.

Output

Enter operator either+ or - or* or divide
Enter two operands: 3.4
8.4
3.4 - 8.4 = -5.0
 *
 */

#include <stdio.h>

int main(void){
	float x,y,answer; char sing,z;
	do
	{
		printf("Enter operator either + or - or * or / : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&sing);
		printf("\nEnter two operands\nFirst one: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&x);
		printf("Second one: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&y);

		if (sing == '+')
		{
			answer = x + y;
			printf("\n%.1f + %.1f = %.1f",x,y,answer);
			fflush(stdin); fflush(stdout);
			printf("\n\nTo Continue Press Y : ");
			fflush(stdin); fflush(stdout);
			scanf("%c",&z);
		}
		else if (sing == '-')
		{
			answer = x - y;
			printf("\n%.1f - %.1f = %.1f",x,y,answer);
			fflush(stdin); fflush(stdout);
			printf("\n\nTo Continue Press Y : ");
			fflush(stdin); fflush(stdout);
			scanf("%c",&z);
		}
		else if (sing == '*')
		{
			answer = x * y;
			printf("\n%.1f * %.1f = %.1f",x,y,answer);
			fflush(stdin); fflush(stdout);
			printf("\n\nTo Continue Press Y : ");
			fflush(stdin); fflush(stdout);
			scanf("%c",&z);
		}
		else if (sing == '/')
		{
			answer = x / y;
			printf("\n%.1f / %.1f = %.1f",x,y,answer);
			fflush(stdin); fflush(stdout);
			printf("\n\nTo Continue Press Y : ");
			fflush(stdin); fflush(stdout);
			scanf("%c",&z);
		}
		else
		{
			printf("\nError! The Sing is wrong");
			fflush(stdin); fflush(stdout);
			printf("\n\nTo Try again Press Y : ");
			fflush(stdin); fflush(stdout);
			scanf("%c",&z);
		}

	}while (z == 'y' || z == 'Y');
}

