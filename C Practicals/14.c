#include <stdio.h>

int main ()
{
	int values[10];
	int i, sum, average;
	average, sum = 0;

	for(i = 0; i < 10; i++)
	{
		printf("enter your number %d:",i+1);
		scanf("%d",&values[i]);
	}

	for(i = 0; i < 10; i++)
	{
		printf("entered number %d - %d\n",(i+1),values[i]);
	}

	for(i = 0; i < 10; i++)
	{
		sum = sum + values[i];
	}

	printf("sum = %d\n",sum);

	average = sum / (float) 10;
	printf("average = %d",average);







	return 0;
}