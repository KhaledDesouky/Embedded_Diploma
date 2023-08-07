/*
 * Task_002.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


char Check_String(char arr[],char Element)
{
	char freq[128]={0};
	int i=0;

	while(arr[i] != '\0')
	{
		char c =arr[i];
		freq[c]++;
		i++;
	}



	return freq[Element];
}





