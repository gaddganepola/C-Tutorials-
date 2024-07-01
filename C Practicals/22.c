#include <stdio.h>

int main ()
{
	int values[50];
	int i, max, min;

	FILE*f;

	f = fopen("./data.txt","r");

	for(i = 0; i < 50; i++)
	{

	fscanf(f, "%d",&values[i]);
	printf("%d \n",values[i]);
	}

	fclose(f);

	
	for(i = 0; i < 50; i++)
	{
		printf("values [%d] = %d \n",i, values[i]);
	}
	
	max = values[0];

	for(i = 0; i < 50; i++)
	{
		if(values[i] > max)
		{
			max = values[i];
		}

	}

printf("max = %d\n",max);

	min = values[0];

	for(i = 0; i < 50; i++)
	{
		if(values[i] < min)
		{
			min = values[i];
		}
		
	}

printf("min = %d",min);




	return 0;
}