/*
 * Task_16.c
 *
 *  Created on: July 3, 2023
 *      Author: user
 */

#include <stdio.h>

int Reverse(int Num_01);

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num_01 , Result ;

	printf("Please Enter YOur Number : \n");
	scanf(" %d",&Num_01);

	Result = Reverse(Num_01);
	printf("The Result = %d \n",Result);

	return 0;
}

int Reverse(int Num_01)
{
	int Reverse_num = 0 ; int Last_Digit ;

	while(Num_01 !=0)
	{
		Last_Digit= Num_01 % 10;
		Reverse_num = Reverse_num * 10 + Last_Digit ;
		Num_01 /= 10 ;
	}


	return Reverse_num;
}
