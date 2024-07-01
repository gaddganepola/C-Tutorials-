#include <stdio.h>

int main ()
{
	float inch, cm;

	printf("Enter the distance in inches : ");
	scanf("%f",&inch);
	cm = inch * 2.54;

	printf("Distance %.5f inches is = %.2f cms",inch, cm);



	return 0;
}