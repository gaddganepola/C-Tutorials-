#include <stdio.h>
int main ()
{
	int number, a, counta, countb;

	counta, countb = 0;


	do 
	{
		printf("Enter an integer : ");
		scanf("%d",&number);

		if ((number <= 9) && (number >= 1))
		{
			a = number % 2;

			if (a == 0)
			{
				counta++;
			}

			a = number % 3;

			if (a == 0)
			{
				countb++;
			}
		}





	}
	while ((number <= 9) && (number >= 1));

	printf("Total number of even integers entered is %d\n",counta);
	printf("Total number of multiples of 3 entered is %d",countb);


	return 0;
}