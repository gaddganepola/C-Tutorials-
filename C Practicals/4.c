
#include <stdio.h>
int main()
{

	int a,b,c,x;
	float d,e,f;

	a = 10;
	b = 7;
	c = a / b;
	printf("c1 = %d\n",c);
	d = a / (float) b;
	printf("c2 = %f\n",d);



	d = 66;
	e = 7;
	f = d / e;

	printf("f = %f",f);

	a = 2;
	b = 5;
	c = 4;
	
	x = (a * ++c) + a + b-- / c - 1;
	printf("x = %d",x);




	return 0;




}