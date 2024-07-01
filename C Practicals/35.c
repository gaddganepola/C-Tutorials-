#include <stdio.h>

int value (int x);
int main ()
{
	int i;
	printf("Enter value : ");
	scanf("%d",&i);

	value (i);

	//printf("%d",i);

	

	//printf("a = %d",value(i));







	return 0;
}

int value (int x)
{
	printf("Before incriment : %d\n",x);

	x++;

	printf("After increment : %d\n",x);

	//return x;
}