/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<string.h>
#include<stdio.h>

void Concat(char* Arr1,char* Arr2)
{
	char conc_Arr[200];

	int i = 0 ;

	while(Arr1[i] != '\0')
	{
		conc_Arr[i]= Arr1[i];
		i++;
	}
	conc_Arr[i]='\0';

	int j =i ,z=0;

	while(Arr2[z]!= '\0')
	{
		conc_Arr[j]= Arr2[z];
		z++;
		j++;
	}
	conc_Arr[j]='\0';

	i=0;
	while(conc_Arr[i] != '\0')
	{
		printf("%c",conc_Arr[i]);
		i++;
	}
}
