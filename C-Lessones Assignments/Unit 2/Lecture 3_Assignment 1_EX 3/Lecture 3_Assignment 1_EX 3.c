/*
 * Lecture 3_Assignment 1_EX 3.c
 *
 *  Created on: 27 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 EX 3
 Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
*/

#include "stdio.h"

int main(void){
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d\n%d",&x, &y);
	printf("Sum: %d",x+y);
	fflush(stdin); fflush(stdout);
	return 0;
}