#include <stdio.h>

int main ()
{
int values[10] = {2, 5, 8, 13, 14, 11, 74, 65, 34, 13};

int i, max, min;

max = values[0];

for (i = 0; i< 10; i++)
{
	if (values[i] > max)
	{
		max = values[i];
	}
}
printf("Maximum value is %d\n",max);

min = values[0];

for (i = 0; i < 10; i++)
{
	if (values[i] < min)
	{
		min = values[i];
	}
}
printf("Minimum value is %d",min);

return 0;
}