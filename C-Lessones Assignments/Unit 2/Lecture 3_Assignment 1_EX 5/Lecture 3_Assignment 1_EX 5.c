/*
 * Lecture 3_Assignment 1_EX 5.c
 *
 *  Created on: 27 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 * EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
 */

#include <stdio.h>

int main(void){
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
}
