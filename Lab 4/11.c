#include <stdio.h>

int main ()
{
char word[10] = {'a', 'v', 's', 'j', 'a', 'g', 't', 'a', 'b', 'c'};
int count, i;
count = 0;
for (i = 0; i < 10; i++)
{
	if (word[i] == 'a')
	{
		count++;	
	}
}

printf("'a' appears %d times in the array.",count);


return 0;
}