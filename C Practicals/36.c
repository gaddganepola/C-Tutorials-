#include <stdio.h>

int answer ();
int main ()
{
	int a, b, result;

	printf("Enter two numbers : ");
	scanf("%d %d",&a, &b);

	result = answer(a, b);
	
	printf("a = %d",result);








	return 0;
}

int answer (int x, int y)
{
	int sum;

	sum = x + y;
	

	return sum;

}