#include <stdio.h>

int main ()
{

float sum;
float zscore[10] = {1.2, 0.9, 0.8, 1.3, 1.4, 1.2, 1.8, 2.2, 2.7, 2.1};
sum = 0;
for (int i = 0; i< 10; i++)
{
	sum = sum + zscore[i];
} 

printf("%.2f",sum);

return 0;
}