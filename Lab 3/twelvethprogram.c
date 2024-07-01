#include <stdio.h>

int main ()
{
	int num1, num2, num3;

	printf("Please enter three integer values : ");
	scanf("%d %d %d",&num1, &num2, &num3);

	if (num1 < num2)
	{
		if(num1 < num3)
		{
			if(num2 < num3)
			{
				printf("The three values in ascending order are : %d %d %d",num1,num2,num3);
			}
			else
			{
				printf("The three values in ascending order are : %d %d %d",num1,num3,num2);
			}
		}
		else
		{
			printf("The three values in ascending order are : %d %d %d",num3,num1,num2);
		}
	}
	else
	{
		if(num2 < num3)
		{
			if(num3 < num1)
			{
				printf("The three values in ascending order are : %d %d %d",num2,num3,num1);
			}
			else
			{
				printf("The three values in ascending order are : %d %d %d",num2,num1,num3);
			}
		}
		else
		{
			printf("The three values in ascending order are : %d %d %d",num3,num2,num1);
		}
	}

		

			
			



	return 0;
}