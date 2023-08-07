/*
 * Task_01.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


int summation(int numbers_size, int* numbers)
{
	int i,sum=0;

	for(i=0; i<numbers_size;i++)
	{
		sum += numbers[i];
	}


	return sum;
}
