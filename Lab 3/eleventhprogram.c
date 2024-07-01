#include <stdio.h>

int main ()
{
	int credit_hours;

	printf("Please enter your total credit hours earned : ");
	scanf("%d",&credit_hours);

	if (credit_hours < 0)
	{
		printf("Invalid input");
	}
	else if (credit_hours <= 30)
	{
		printf("You are a first - year student.");
	}
	else if (credit_hours <= 60)
	{
		printf("You are a second - year student.");
	}
	else if (credit_hours <= 90)
	{
		printf("You are a third - year student.");
	}
	else
	{
		printf("You are a fourth - year student.");
	}





	return 0;
}