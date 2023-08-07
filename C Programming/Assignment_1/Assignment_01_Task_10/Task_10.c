/*
 * Task_10.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */

#include <stdio.h>

void Calculator (float Number_01 , float Number_02 , char Operation);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float Number_01 , Number_02 ; char Operation ;

	printf("Please Enter First Number: \n");
	scanf(" %f",&Number_01);

	printf("Please Enter Second Number: \n");
	scanf(" %f",&Number_02);

	printf("Please Enter Operation: \n");
	scanf(" %c",&Operation);

	Calculator(Number_01, Number_02 , Operation);
	return 0;
}

void Calculator (float Number_01 , float Number_02 , char Operation)
{
	double Result ;

	switch (Operation)
	{
	case'+': Result = Number_01 + Number_02; printf("The Result = %0.3f", Result); break;
	case'*': Result = Number_01 * Number_02; printf("The Result = %0.3f", Result); break;
	case'/': Result = Number_01 / Number_02; printf("The Result = %0.3f", Result); break;
	case'-': Result = Number_01 - Number_02; printf("The Result = %0.3f", Result); break;
	default: printf("Wrong Operation \n");
	}
}
