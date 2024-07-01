#include <stdio.h>
int main()
{
	
	int x,y,z;

	x = 10;
	y = 20;
	z = 30;

	printf("%d\n",(++x + x++));

	printf("x = %d\n",x);

	printf("%d\n",--x - x--);

	printf("x = %d\n",x);

	printf("%d\n",++x - ++y - ++z);

	printf("y = %d\n",y);

	printf("%d\n",(++y) * (++y));

		printf("y = %d\n",y);
		printf("%d\n",(++x) * (++y));


return 0;
}