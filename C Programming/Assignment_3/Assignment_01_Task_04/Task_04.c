/*
 * Task_04.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

void Selection_Sorting(int array[],int Array_elements)
{
	int i ,j ,min ,temp ;

	for(i = 0; i<Array_elements-1 ; i++)
	{

		min = i;


		for(j=i+1 ; j<Array_elements ; j++)
		{
			if(array[min] > array[j])
			{
				min=j;
			}
		}

		temp =array[i];
		array[i]=array[min];
		array[min]=temp;

	}

}

