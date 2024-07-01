#include <stdio.h>

int main ()
{
	char answer;

	printf("Hello\n");

	do
	{
		printf("Are you having a good day ? ");
		scanf(" %c",&answer);
	}
	while(!(answer == 'y' || answer == 'n'));

	if (answer == 'y')
	{
		printf("I'm glad to hear that.");
	}
	else
	{
		printf("I hope your day gets better soon.");
	}





	return 0;
}