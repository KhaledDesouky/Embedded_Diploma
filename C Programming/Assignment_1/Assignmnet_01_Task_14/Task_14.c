/*
 * Task_14.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */

#include <stdio.h>
#include <math.h>

void Print_Alpahbets (void);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	Print_Alpahbets();

	return 0;
}

void Print_Alpahbets (void)
{

	for(char i = 'A'; i <= 'Z'; i++)
	{
		printf("%c ", i);
	}
}
