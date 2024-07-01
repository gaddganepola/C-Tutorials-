#include <stdio.h>

void input ();
void sum ();
void max ();
int main()
{
	input ();

	sum ();

	max ();



	return 0;
}
//************************************************
void input ()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Enter number %d :",i + 1);
		scanf("%d",&a[i]);
		
	}
}
//************************************************
void sum ()
{
	int x[10];
	int sum = 0;
	for(int i = 0; i < 10; i++)
	{
		sum = sum + x[i];
	}
	printf("sum = %d\n",sum);
}

//************************************************
void max ()
{
	int max, i, x[10];
	max = x[0];
	for(i = 0; i < 10; i++)
	{
		if (max < x[i])
		{
			max = x[i];
		}

	}
	printf("max = %d",max);
}