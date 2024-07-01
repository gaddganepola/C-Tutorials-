#include <stdio.h>
int main()
{
	int count , n , number,sum ;
	float avg ;

	avg = 0;
	count = 0;
	n = 0;
	sum = 0;

	while(count < 10)
	{
		printf("enter your number %d\n",++n);
		scanf("%d",&number);
		sum = sum + number;
		
		count++ ;

	}


		printf("sum = %d\n",sum);
		avg = (float) sum /  count;
		printf("avg = %f",avg);


	return 0;

}