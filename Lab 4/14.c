#include <stdio.h>
int main ()
{ 
	char name[5][20];
	int marks[5][4], i, j, k, sum[5];
	float avg[5];

	for (i = 0; i < 5; i++)
	{

		printf("Enter player name and marks : ");
		scanf(" %s %d %d %d %d",&name[i], &marks[i][0], &marks[i][1], &marks[i][2], &marks[i][3]);
		
	}



	for (i = 0; i < 5; i++)
	{
		sum[i] = 0;
		for (j = 0; j < 4; j++)
		{
			sum[i] = sum[i] + marks[i][j];
		}
		//printf("marks = %d\n",sum[i]);
		avg[i] = sum[i] / (float)4;
		//printf("avg = %f\n",avg[i]);
	}

	for (j = 0; j < 5; j++)
	{
		printf("%s  \t%5d  %5.2f\n",name[j],sum[j],avg[j]);
	}


	
	






	return 0;
}