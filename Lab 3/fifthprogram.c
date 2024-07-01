#include <stdio.h>

int main ()
{
	float F, C;

	printf("Enter temp in Fahrenheit : ");
	scanf("%f",&F);

	C = ((F - 32)*5)/9;

	printf("Temp %.2f in Fahrenheit = %.2f Centigrade",F, C);




	return 0;
}