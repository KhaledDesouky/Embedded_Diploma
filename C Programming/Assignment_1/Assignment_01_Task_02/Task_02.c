/*
 * Task_02.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>


void Print_Name(char Name[]);
void Print_Grade(float Math , float English , float Arabic);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char Name[100];
	float Value_Math , Value_English , Value_Arabic ;
	printf("Please Enter Your Name : \n");
	scanf(" %s",Name);

	printf("Please Enter Your Math Grade : \n");
	scanf(" %f",&Value_Math);

	printf("Please Enter Your English Grade : \n");
	scanf(" %f",&Value_English);

	printf("Please Enter Your Arabic Grade : \n");
	scanf(" %f",&Value_Arabic);

	Print_Name(Name);
	Print_Grade(Value_Math,Value_English,Value_Arabic);

	return 0;
}

void Print_Name(char Name[])
{
	printf("Your Name : %s \n",Name);
}

void Print_Grade(float Math , float English , float Arabic)
{
	printf("YOur Grade in Math is: %f \n",Math);
	printf("YOur Grade in English is: %f \n",English);
	printf("YOur Grade in Arabic is: %f \n",Arabic);

}
