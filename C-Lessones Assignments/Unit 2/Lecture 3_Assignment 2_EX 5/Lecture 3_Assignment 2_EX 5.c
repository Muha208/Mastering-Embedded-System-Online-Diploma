/*
 * Lecture 3_Assignment 2_EX 5.c
 *
 *  Created on: 28 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 *EX5: C Program to Check Whether a Character is an Alphabet or not

This program takes a character from user and checks whether that character is an alphabet or not.


Output 1

Enter a character: *
 * is not  an  alphabet Output 2
Enter a character: K K is an alphabet
 *
 */

#include<stdio.h>

int main(void){
	char x,y;
	do
	{
		printf("Enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&x);
		if ((64 < x && x < 91)|| (95 < x && x < 123))
		{
			printf("%c is an alphabet",x);
			fflush(stdin); fflush(stdout);
			printf("\nTo continue press C\n");
			fflush(stdin); fflush(stdout);
			scanf("%c",&y);
		}
		else
		{
			printf("%c is not  an  alphabet",x);
			fflush(stdin); fflush(stdout);
			printf("\nTo continue press C\n");
			fflush(stdin); fflush(stdout);
			scanf("%c",&y);
		}

	}while (y == 'C' || y == 'c');

}
