/*
 * Task_17.c
 *
 *  Created on: July 3, 2023
 *      Author: user
 */


#include <stdio.h>

int Count_Digit(int Num_01);

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num_01 , Result ;
	printf("Please Enter A Number : \n");
	scanf(" %d",&Num_01);

	Result = Count_Digit(Num_01);

	printf("The Result = %d \n",Result);

	return 0 ;

}

int Count_Digit(int Num_01)
{
	int Count = 0;

	do{
		Num_01 /= 10 ;
		++Count;
	}
	while(Num_01 != 0);

	return Count;
}
