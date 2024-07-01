#include <stdio.h>

int main ()
{
	char letter;

	printf("Please enter a letter : ");
	scanf(" %c",&letter);

	switch (letter)
	{
		case 'X':
		printf("Sum = 10");
		break;

		case 'Z':
		printf("Sum = 100");
		break;

		case 'A':
		printf("Sum = 1000");
		break;

		default :
		printf("Unknown letter --> %c\n",letter);

	}






	return 0;
}