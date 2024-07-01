#include <stdio.h>

int main ()
{
int i,j;

i = 0;

++i;

while (i < 6)
{

	
//printf("i = %d\n",i);
//printf("j = %d\n",j);
	
	j = 0;
	while (i > j)
	{

		printf("%d",i);
		
		++j;
	}


printf("\n");	
++i;
}






return 0;
}