/*
 * Task_002.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


char Check_String(char arr[])
{
	int i =0;

	while(arr[i] != '\0')
	{
		int j=i+1;

		while(arr[j]!='\0')
		{

			if(arr[i]==arr[j])
			{
				return 0;
			}
			j++;

		}

		i++;
	}

	return 1;
}
