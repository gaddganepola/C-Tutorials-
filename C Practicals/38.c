#include <stdio.h>

char grade (int marks);

int main ()
{
	int marks;
	char a;

	//printf("Enter marks : ");
	//scanf("%d",&marks);

	//a = grade (marks);
	printf("Your grade is %c.",grade (marks));

	//printf("%c",grade(marks));






	return 0;

}

char grade (int marks)
{
	printf("Enter marks : ");
	scanf("%d",&marks);

	if (marks > 75)
	{
		return 'A';
	}
	else if (marks > 65)
	{
		return 'B';
	}
	else if (marks > 55)
	{
		return 'C';
	}
	else if (marks > 35)
	{
		return 'S';
	}
	else 
	{
		return 'F';     
	}
}