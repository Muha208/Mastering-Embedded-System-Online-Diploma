/*
 * Lecture 3_Assignment 1_EX 6.c
 *
 *  Created on: 27 Jul 2022
 *      Author: Muhammad Osama
 */

/*
 *EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2

 */

#include<stdio.h>
int main(void){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
    scanf("%f",&a);
    printf("After swapping, value of a = %.2f\nAfter swapping, value of b = %.1f",a,b);
    fflush(stdin); fflush(stdout);
}
