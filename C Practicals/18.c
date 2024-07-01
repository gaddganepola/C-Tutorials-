#include <stdio.h>
int main()
{
	int marks [2][2];
	int i, j;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
		printf("stu %d sub %d marks: ",i + 1, j + 1);
		scanf("%d",&marks[i][j]);
		}
	}

	printf("\tsub 1 sub 2\n");

	for(i = 0; i < 2; i++)
	{
		printf("stu %d\t",i + 1);
		for(j = 0; j < 2; j++)
		{
		
		printf("%d \t",marks[i][j]);
		}
	printf("\n");
	}




	






	return 0;

}