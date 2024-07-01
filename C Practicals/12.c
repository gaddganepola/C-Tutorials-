#include <stdio.h>
int main()
{
	int a , b , count , result;
	char ope;

	a = 0;
	b = 0;
	count = 0;
	result = 0;
	ope = '0';


	

	printf("input number %d:\n",++count);
	scanf("%d",&a);
	printf("input number %d:\n",++count);
	scanf("%d",&b);
	
	printf("input operator :\n");
	scanf(" %c",&ope);

	
	/*if (ope == '+')
	{
		result = a + b;
		//printf("result = %d",result);
	}

	else if (ope == '-')
	{
		result = a - b;
		//printf("result = %d",result);
	}

	else if (ope == '*')
	{	
		result = a * b;
		//printf("result = %d",result);
	}

	else if (ope == '/')
	{
		result = a / b;
		//printf("result = %d",result);
	}

	else if (ope == '$')
	{
		result = a + b;
		result = result / count;
		//printf("result = %d",result);
	}

	else
	{
		printf("incorrect operator");
	}


printf("result = %d",result);*/

	switch (ope)
	{

	case '+':

		printf("result = %d",a + b);
		break;

	case '-':

		printf("result = %d",a - b);
		break;

	case '*':

		printf("result = %d",a * b);
		break;

	case '/':

		printf("result = %d",a / b);
		break;

	case '$':

		printf("result = %d",(a + b)/2);
		break;

	default:

		printf("incorrect operator");

	}


	return 0;
}