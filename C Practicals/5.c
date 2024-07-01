
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b;
	double c;
	a = 4580.58451;
	b = 589.358465;
	c = 4578.1646855;


	printf("	D.D.STORES\n");
	printf("	----------\n");
	printf("Item		    Price\n");
	printf("----		    -----\n");
	printf("Item_1 		R.s%10.2f\n",a);
	printf("Item_2 		R.s%10.2f\n",b);
	printf("Item_3 		R.s%10.2lf\n",c);
	printf("-----------------------------\n");
	printf("Total  		R.s%10.2lf\n",a + b + c);
	printf("Total  		R.s%10.2f\n",(ceil(a * 100.0) / 100) + (ceil(b * 100.0) / 100) + (ceil(c * 100.0) / 100));
	printf("=============================\n");
	printf("\n");



	printf("	**THANK YOU**\n");
	printf("	  *WELCOME*");








	return 0;
}