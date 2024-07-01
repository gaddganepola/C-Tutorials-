#include <stdio.h>

int main ()
{
	char stunum[20];
	int marks;
	char grade;
	float avg;

	FILE*f;

	f = fopen("./data1.txt","r");

	fscanf(f,"%s",&stunum);
	fscanf(f,"%d",&marks);
	fscanf(f," %c",&grade);
	fscanf(f,"%f",&avg);

	printf("  STUNUM       MARKS  GRADE    AVERAGE\n");
	printf("%s %6d %6c %10.2f",stunum,marks,grade,avg);


fclose(f);






	return 0;
}