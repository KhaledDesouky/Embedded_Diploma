/*
 * Task_14.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>


int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int m1=0 ,m2=1 , m ;
	printf("Please Enter a number \n");
	scanf("%d",&m);
	printf("The Fibonacci Series will be: ");
	printf(" %d %d ", m1 ,m2);
	for (int i =2 ; i<=m ; i++)
	{
		m1 =m1+m2;
		int temp ;
		temp= m1;
		m1=m2;
		m2=temp;
		printf(" %d ", m2);
	}

	return 0;
}

/*
void Fibonacci(int m);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int m;
	printf("Please Enter a number \n");
	scanf("%d",&m);
	printf("The Fibonacci Series will be: ");
	printf("%d %d" ,0,1);
	Fibonacci(m-2);
	return 0;
}

void Fibonacci(int m)
{
	static int m1=0 , m2=1, m3;
	if(m>0)
	{
		m3 = m1 + m2;
		m1 = m2;
		m2 = m3;
		printf(" %d ", m3);
		Fibonacci(m-1);
	}
}
*/
