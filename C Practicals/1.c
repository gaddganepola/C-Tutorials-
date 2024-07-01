
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	int i,x;
	float f;
	double d;
	char c;

	printf("****Garbage values****\n");
	printf("value of i = %d\n",i);
	printf("value of f = %f\n",f);
	printf("value of d = %lf\n",d);
	printf("value of c = %c\n",c);


	printf("****Size of each variable****\n");
	printf("size of i = %lu bytes\n",sizeof(i));
	printf("size of f = %lu bytes\n",sizeof(f));
	printf("size of d = %lu bytes\n",sizeof(d));
	printf("size of c = %lu bytes\n",sizeof(c));


	printf("****Assign values****\n");

	i = 10.5;
	f = 1254.2;
	d = -156498746.254897;
	c = 'D';

	printf("value of i = %d\n",i);
	printf("value of f = %f\n",f);
	printf("value of d = %lf\n",d);
	printf("value of c = %c\n",c);


	printf("****Limits of variables****\n");
	printf("Maximum intiger number can represent : %d\n",INT_MAX);
	printf("Minimum integer number can represent : %d\n",INT_MIN);
	printf("Total numbers can represent = %lu\n",INT_MAX + INT_MIN);


	printf("Maximum float number can represent = %f\n",FLT_MAX);
	printf("Minimum float number can represent = %f\n",FLT_MIN);
	printf("Minimum float number can represent = %f\n",-FLT_MAX);


	printf("Maximum double number can represent = %lf\n",DBL_MAX);
	printf("Minimum double number can represent = %lf\n",DBL_MIN);
	printf("Minimum double number can represent = %lf\n",-DBL_MAX);




	printf("Maximum char can represent = %c\n",SCHAR_MAX);
	printf("Minimum char can represent = %c\n",SCHAR_MIN);



	long int li;
	short int si;
	signed int sdi;
	unsigned int usi;

	printf("size of long int = %lu bytes\n",sizeof(li));
	printf("size of short int = %lu bytes\n",sizeof(si));
	printf("size of signed int = %lu bytes\n",sizeof(sdi));
	printf("size of unsigned int = %lu bytes\n",sizeof(usi));



	f = 2547.1;
	d = 123456789.123589475;
	printf("value f = %f\n",f);
	printf("value d = %.15lf\n",d);


	i = 20;
	x = 3; 

	f = i / (float) x;
	printf("f = %.1f\n",f);

	d = f * i;
	printf("d = %lf\n",d);



















	return 0;
}