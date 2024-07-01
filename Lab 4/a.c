#include <stdio.h>
int main ()
{
	int marks[5][4], i, sum[5],j;
	float avg[5];

	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Enter player %d score %d : ",i+1,i+1);
			scanf("%d",&marks[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum[i] = sum[i] + marks[i][j];
		}

		avg[i] = sum[i] / (float)4;
		printf("total = %d\n",sum[i]);
		printf("avg = %.2f",avg[i]);
	}



	return 0;
}