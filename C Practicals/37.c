#include <stdio.h>

float read_num ();


int main()
{
	float value;

	//value = read_num();

	printf("value = %f",read_num());





	return 0;
}


float read_num ()
{
	float x;
	printf("Enter floating point value : ");
	scanf("%f",&x);
	printf("You entered floting point value is %.3f",x);

	return x;
}
