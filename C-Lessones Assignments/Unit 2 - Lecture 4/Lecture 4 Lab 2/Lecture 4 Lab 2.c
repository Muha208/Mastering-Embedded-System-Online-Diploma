/*
 * Lecture 4 Lab 2.c
 *
 *  Created on: 4 Aug 2022
 *      Author: Muhammad Osama
 */

/*
 * -the program works correctly; however,
 *  it appears that code size contains many repeated sections, each section for each value.
If the number of values increases code size increases.
Alternative solve it using Arrays and Loops
 *
 */
//we need to define array we don't know the size of it
#include<stdio.h>

int main()
{
	float x [5]={5,16,22,3.5,15};
	float y;
	int n;

	for (n=0; n<5;n++)
	{
		y = 5*x[n]*x[n]+3*x[n]+2;
		printf("y(%.1f) = %.1f\n",x[n],y);
		fflush (stdin); fflush (stdout);
	}

}
