#include <stdio.h>

int main ()
{
	char letter;

	printf("Enter your character : ");
	scanf(" %c",&letter);

	if (letter == 'a')
	{
		printf("Output is : A");
	}
	else if (letter == 'b')
	{
		printf("Output is : B");
	}
	else if (letter == 'c')
	{
		printf("Output is : C");
	}
	else if (letter == 'd')
	{
		printf("Output is : D");
	}
	else if (letter == 'e')
	{
		printf("Output is : E");
	}
	else if (letter == 'f')
	{
		printf("Output is : F");
	}
	else if (letter == 'g')
	{
		printf("Output is : G");
	}
	else
	{
		printf("Output is : X");
	}



	return 0;
}