/*
 * Lecture 4 String Example.c
 *
 *  Created on: 6 Aug 2022
 *      Author: Muhammad Osama
 */


#include<stdio.h>

int main ()
{
	char x [7];
	x[0] = 'h';
	x[1] = 'e';
	x[2] = 0;
	x[3] = 'l';
	x[4] = 'l';
	x[5] = 0;

	printf("%s \n",x);
	printf("%s \n",&x[0]);
	printf("%s \n",&x[1]);
	printf("%s \n",&x[3]);

}
