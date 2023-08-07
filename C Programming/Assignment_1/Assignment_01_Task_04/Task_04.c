/*
 * Task_04.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

float Cal_Area (float Raduis);
float Cal_Circumference (float Raduis);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float Raduis , Res_Area , Res_Circumference ;

	printf("Please Enter The Raduis : \n");
	scanf(" %f",&Raduis);

	Res_Area = Cal_Area(Raduis);
	Res_Circumference = Cal_Circumference(Raduis);

	printf("Resulted Area = %0.3f \n",Res_Area);
	printf("Resulted Circumference = %0.3f \n",Res_Circumference);

	return 0 ;
}

float Cal_Area (float Raduis)
{
	return Raduis *Raduis * 3.14 ;
}

float Cal_Circumference (float Raduis)
{
	return 2 * 3.14 * Raduis ;
}
