#include <stdio.h>

int main ()
{
int value, i,total;

total = 0;
value = 11;

for(i = 0; i < 89; i++)
{
	total = total + value;
	//printf("%d\n",value);
	value++;	
	
}

printf("Total = %d",total);


return 0;

}