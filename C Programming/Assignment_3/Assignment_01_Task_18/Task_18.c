/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
int Count (int *a, int search, int size)
{
	int count=0 , max_count ,i=0 ;

	for(i=0;i<=size ;i++)
	{
		if(search == a[i])
		{
			count ++ ;
			if(count > max_count )
			{
				max_count =count;
			}
		}
		else
		{
			count=0;
		}
	}

	return max_count;

}
