#include <stdio.h>

//function prototype
void sys_log ();

void loop ();

int main()
{

	/*printf("Welcome to the system\n");
	printf("Now you are a member\n");
	printf("Thank you !\n");*/

	sys_log ();  //function call

	loop ();

	sys_log ();

	loop ();

	sys_log ();











	return 0;
}

//function decleration
void sys_log () // finction heading
{
	printf("Welcome to the system\n");
	printf("Now you are a member\n");    //function body
	printf("Thank you !\n");
}

void loop ()
{
	int height, width;
	printf("enter height and width:");
	scanf("%d %d",&height, &width);
	for (int i = 0; i < height; i++)
	{
		for(int i = 0; i < width; i++)
		{
			printf("*");

		}

		printf("\n");
	}
}