#include <stdio.h>

int main ()
{
	int height, i, j, k, l, a, b;
	l = 0;
	a = 0;
	b = 0;

	printf("Please enter the height of the pyramid : ");
	scanf("%d",&height);


	for (i = 0; i < height; i++)
	{
		a++;

		for (j = 0; j  < height - a; j++)
		{
			printf(" ");
		}

		
		l = 2*(b) + 1;

		for (k = 0; k < l; k++)
		{
			printf("*");
		}

		b++;

		printf("\n");
	}



	return 0;
}