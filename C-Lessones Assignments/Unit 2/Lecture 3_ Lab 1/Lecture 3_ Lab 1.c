/*
 * Lecture3_Lab 1.c
 *
 *  Created on: 27 Jul 2022
 *      Author: Muhammad Osama
 */
//we need to get :
//0123456789
//123456789
//23456789
//3456789
//456789
//56789
//6789
//789
//89
//9
#include "stdio.h"

int main(void){
	int x,y,z;
	printf("Enter the base of triangle: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&z);
	for (x=0;x<=z;x++)
	{
		for (y=x;y<=z;y++){
			printf("%d ",y); //0 1 2 3 4 5 6 7 8 9
			fflush(stdin); fflush(stdout);
		}
		printf("\n");
		fflush(stdin); fflush(stdout);
	}

}

