/*
 * Lecture 4 Lab 1.c
 *
 *  Created on: 4 Aug 2022
 *      Author: Muhammad Osama
 */

/*
 * Store and Print 10 Students Degrees
Shows how to scan 10 studentsí degree from user,
stores them in a single area, and then prints them.
 *
 */

#include<stdio.h>
int main()
{
	int n; //Define the number of students = 10
	float students_degree [10];

	for (n=0;n<10;n++) // that 's mean it will loop till get n = 9 then 9 + 1 (first n = 0 ) = 10 students
	{
		printf("\n Enter Student %d Degree: ",n+1); // n+1 because n = 0 and we need to get the first student 1
		fflush(stdin); fflush(stdout);
		scanf("%f",&students_degree[n]);
	}
	for (n=0;n<10;n++)
	{
		printf("\n Student %d Degree is : %.2f",n+1,students_degree[n]);
		fflush(stdin); fflush(stdout);
	}
}
