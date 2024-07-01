#include <stdio.h>
int main()
{
	int age,gender,i;
	

	printf("please enter your age.\n");
	
	scanf("%d",&age);
	printf("please enter your gender '1' for girl '2' for boy.\n");
	scanf("%d",&gender);
	printf("your age = %d\n",age);

	if (age >= 18 & gender == 1)
	{
		
		printf("hi girl\n");
		printf("you can access.\n");

		
		

		

	}

	if (age >= 18 & gender == 2)
	{
		
		printf("hi boy\n");
		printf("you can access.\n");
		printf("enter a integer\n");
		scanf("%d",&i);
		printf("num = %d\n",i);
		if (i > 20)
		{
			printf("wow");
		}
		
		

		

	}


	if (age < 18)
	{
		printf("try this after %d years.\n",18 - age);

	}


	return 0;


}