#include <stdio.h>
int main()
{
	int marks[3][5];
	int i, j;

	for(i = 0; i < 3; i)
	{
		for(j = 0; j < 5; j++)
		{
			printf("stu %d maths marks:",j + 1);
			scanf("%d",&marks[i][j]);

		}
		for(j = 0; j < 5; j++)
		{
			printf("stu %d phys marks:",j + 1);
			scanf("%d",&marks[++i][j]);

		}
		for(j = 0; j < 5; j++)
		{
			printf("stu %d chem marks:",j + 1);
			scanf("%d",&marks[++i][j]);

		}

	}

printf("*******************\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("stu %d maths marks: %d\n",j + 1,marks[i][j]);
		}
		for(j = 0; j < 5; j++)
		{
			printf("stu %d phys marks: %d\n",j + 1,marks[++i][j]);
		}
		for(j = 0; j < 5; j++)
		{
			printf("stu %d chem marks: %d\n",j + 1,marks[++i][j]);
		}
	}

printf("*********************\n");
printf("\tstu1\tstu2\tstu3\tstu4\tstu5\n");

	for(i = 0; i < 3; i++)
	{
		printf("maths \t");
		for(j = 0; j < 5; j++)
		{
			printf("%2d \t",marks[i][j]);
		}
		printf("\n");
		printf("phys\t");
		for(j = 0; j < 5; j++)
		{
			printf("%2d \t",marks[++i][j]);
		}
		printf("\n");
		printf("chem\t");
		for(j = 0; j < 5; j++)
		{
			printf("%2d \t",marks[++i][j]);
		}


	}	











	return 0;
}