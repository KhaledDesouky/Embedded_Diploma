/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


int Linear_Search(int Array[],int Array_Element ,int Search_Element)
{
	int i,Index=-1;

	for(i=0; i<Array_Element; i++)
	{
		if(Search_Element == Array[i])
		{
				return i;
		}
	}


	return Index;
}
