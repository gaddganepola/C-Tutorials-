#include <stdio.h>
int main ()
{
	int num, sum, i;
	sum = 0;

	FILE*f;

	f = fopen("./infile.txt","r");

	if (f == NULL)
	{
		printf("Couldn't find the file location");
		return 0;
	}

	for (i = 0; i < 3; i++)
	{
			fscanf(f,"%d",&num);
			sum = sum + num;
	}

	FILE*fp;

	fp = fopen("./outfile.txt","w");

	fprintf(fp,"The sum of the first three numbers in infile.txt is %d",sum);

	fclose(fp);

	fclose(f);





	return 0;
}