/*
 * Task_03.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


void Bubble_Sorting(int Arr[],int Arr_Size)
{
	int i ,j,temp;

	for(i=0 ; i<Arr_Size-1;i++)
	{
		for(j=0 ; j<Arr_Size-i-1 ;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				temp=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=temp;
			}
		}
	}
}
