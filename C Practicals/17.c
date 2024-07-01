#include <stdio.h>
int main ()
{
	char name[10];
	int i;

	
	//printf("%c",name[0]);





	for(i = 0; i < 10; i++)
	{
		printf("type letter %d:",i + 1);
		scanf("%C",&name[i]);
		

	}

	printf("your name is %c",name[i]);





	return 0;
}