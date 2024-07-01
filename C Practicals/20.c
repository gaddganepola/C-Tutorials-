#include <stdio.h>
int main()
{
	int marks[5][3];
	int i, j;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("stu %d maths marks:",i + 1);
			scanf("%d",&marks[i][j]);
			printf("stu %d phys marks:",i + 1);
			scanf("%d",&marks[i][++j]);
			printf("stu %d chem marks:",i + 1);
			scanf("%d",&marks[i][++j]);
		}
	}

printf("*************\n");

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			//printf("[%d][%d] = %d\n",i,j,marks[i][j]);
			printf("stu %d maths marks: %d \n",i + 1,marks[i][j]);
			printf("stu %d phys marks: %d \n",i + 1,marks[i][++j]);
			printf("stu %d chem marks: %d \n",i + 1,marks[i][++j]);
		}
	}
printf("*************\n");
printf("\tmaths\tphys\tche\n");

	for(i = 0; i < 5; i++)
	{
		printf("stu %d \t",i + 1);

		for(j = 0; j < 3; j++)
		{
			
			printf("%2d \t",marks[i][j]);
		}
		printf("\n");
	}


	return 0;
}