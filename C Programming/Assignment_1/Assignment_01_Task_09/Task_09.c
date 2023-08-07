/*
 * Task_09.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

void Check_Grade(int Percentage);
int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int Percentage ;

	printf("Please Enter Your Percentage : \n");
	scanf(" %d", &Percentage);

	Check_Grade(Percentage);

	return 0;
}

void Check_Grade(int Percentage)
{
	if(Percentage>=85)
	{
		printf("Your Grade Is Excellent \n");
	}
	else if (Percentage >=75)
	{
		printf("Your Grade Is VeryGood \n");
	}
	else if (Percentage >=65)
	{
		printf("Your Grade Is Good \n");
	}
	else if (Percentage >=50)
	{
		printf("Your Grade Is Pass \n");
	}
	else if (Percentage <50)
	{
		printf("Your Grade Is Fail \n");
	}

}
