#include <stdio.h>

int main ()
{
	int a, b, c;
	float d, e, f;
	char g, h, i, j, k, l;

	printf("Enter integer character and floating point number : ");
	scanf("%d %c %f",&a, &g, &d);
	printf("Enter integer integer and floating point number : ");
	scanf("%d %d %f",&b, &c, &e);
	printf("Enter any four letters : ");
	scanf("%c %c %c %c",&h, &i, &j, &k);
	printf("Enter character and floating point value : ");
	scanf("%c %f",&l, &f);

	printf("Entered input statement : %d %c %.1f\n",a,g,d);
	printf("Entered input statement : %d %d %.3f\n",b,c,e);
	printf("Entered input statement : %c %c %c %c\n",h,i,j,k);
	printf("Entered input statement : %c %.2f\n",l,f);








	return 0;
}