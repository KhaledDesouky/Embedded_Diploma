/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


int Length_Array (char Array[])
{

	int i =0, sum=0;

	while(Array[i] != '\0')
	{
		sum+=1;

		i++;
	}
	return sum;

}
