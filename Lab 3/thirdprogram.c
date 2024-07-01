#include <stdio.h>

int main ()
{
int x, y, z, a, b, c, d;

x = 10;
y = 20;
z = 30;

a = x++ + 10;

b = --x - x--;

c = ++x - ++y - ++z;

d = ++y * ++y;

printf("a = %d\n",a);
printf("b = %d\n",b);
printf("c = %d\n",c);
printf("d = %d\n",d);







	return 0;
}