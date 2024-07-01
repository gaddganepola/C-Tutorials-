#include <stdio.h>

void print ();

int main ()
{

	int i,j;

	for (i = 0; i < 5; i++)
	{
		
		print ();

		 	for(j = 0; j < 5; j++)
			{
		 		printf("%d\n",j);
		 	}
	}





	return 0;
}
void print ()
{
	printf("This is a user define void function.\n");
}