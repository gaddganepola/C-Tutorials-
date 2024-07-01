#include <stdio.h>
int main ()
{
	int i, j, num[5];
	j = 4;

	for(i = 0; i < 5; i++)
	{
		printf("Enter an integer : ");
		scanf("%d",&num[i]);
	}
	printf("\n");
	printf("The list of values are :\n");

	for (i = 0; i < 5; i++)
	{
		
		printf("%d\n",num[i]);
	}
	printf("\n");

	printf("The list of the values printed in reverse are :\n");

	for (i = 0; i < 5; i++)
	{
		
		printf("%d\n",num[j]);
		j--;
	}	 





	return 0;
}