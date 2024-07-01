#include <stdio.h>
#include <limits.h>

int main()
{
	int  count , number;
	double answer;
	
	answer = 1;
	count = 1;
	number = 0;

	//printf("%f",FLT_MAX);


	printf("type your number:\n");
	scanf("%d",&number);

	while (count <= number)
	{
		answer = answer * count;

		count++;


	}
	printf("answer = %lf\n",answer);
	printf("%lu\n",sizeof(answer));
	






		return 0;
}