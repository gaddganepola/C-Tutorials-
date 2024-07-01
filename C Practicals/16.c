#include <stdio.h>
int main()
{
	int values[10];
	int i, max, min, value, count;
	count = 0;

	for(i = 0; i < 10; i++)
	{
		printf("enter your number %d:",i + 1);
		scanf("%d",&values[i]);
	}

	for(i = 0; i < 10; i++)
	{
		printf("entered num %d = %d\n",i + 1, values[i]);
	}

	max = values[0];

	for(i = 0; i < 10; i++)
	{
		if(values[i] > max)
		{
			max = values[i];
		}
	}
	printf("max value = %d\n",max);

	min = values[0];

	for(i = 0; i < 10; i++)
	{
		if(values[i] < min)
		{
			min = values[i];
		}
		
		
	}

	printf("min value = %d\n",min);

	printf("enter value want to check:");
	scanf("%d",&value);
	
	for(i = 0; i < 10; i++)
	{
		if(value == values[i])
		{
			count++;
		}

	}
	printf("your %d value appear %d times.",value,count);













	return 0;
}