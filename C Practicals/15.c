#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{ 
	int values[10] = {0};
	int i;

	srand(time(0));

	for(i = 0; i < 10; i++)
	{
		values[i] = rand() % 100;
		printf("value[%d] = %d\n",i,values[i]);
	}








	return 0;

}