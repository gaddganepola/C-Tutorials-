#include <stdio.h>

void sum ();
int main()
{
	int a, b;
	printf("Enter two integers :");
	scanf("%d %d",&a, &b);
	sum (a, b);

	




	return 0;
}

void sum (int x, int y)
{
	int sum;
	sum = x + y;
	printf("sum = %d",sum);
}