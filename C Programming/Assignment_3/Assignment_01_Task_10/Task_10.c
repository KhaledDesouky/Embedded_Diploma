/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


void Convert_Upper_to_Lower (char Array[])
{

	int i =0;

	while(Array[i] != '\0')
	{
		if(Array[i]>= 'A' ||Array[i]<='Z')
		{
			Array[i] += 32;
		}
		i++;
	}

}
