#include <stdio.h>
int main ()
{
int values[10] = {2, 5, 8, 13, 14, 11, 74, 65, 34, 13}; 
int odd, count, i;
count = 0;

for (i = 0; i < 10; i++)
{
	odd = values[i] % 2;
	printf("odd = %d\n",odd);

	if (odd == 1)
	{
		count++;
		printf("count = %d\n",count);
	}
}
printf("There are %d odd numbers.",count);


return 0;
}