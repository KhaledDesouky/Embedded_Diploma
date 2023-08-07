/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


void Reverse (char Array[],int Length)
{
	char temp ;

	for (int i = 0; i < Length / 2; i++)
	{
		temp = Array[i];
		Array[i] = Array[Length - i - 1];
		Array[Length - i - 1] = temp;

	}


}
