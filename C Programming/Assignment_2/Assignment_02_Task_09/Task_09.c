/*
 * Task_09.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

void Swape(int* Number_01, int* Number_02);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	int Number_01 ,Number_02;

	printf("Please enter First Number \n");
	scanf("%d",&Number_01);

	printf("Please enter second Number \n");
	scanf("%d",&Number_02);

	printf("The numbers before swaping = %d  %d \n",Number_01,Number_02);

	Swape(&Number_01,&Number_02);

	printf("The numbers after swaping = %d  %d \n",Number_01,Number_02);
	return 0;
}

void Swape(int* Number_01, int* Number_02)
{
	int temp  ;

	temp= *Number_02;
	*Number_02 =*Number_01 ;
	*Number_01 =temp;


}
