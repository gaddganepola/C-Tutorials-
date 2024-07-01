#include <stdio.h>
int main ()
{
	int i,values;

	FILE*fp;

	fp = fopen("./data.txt","r");

	if(fp == NULL)
	{
		printf("couldn't find file path");
		return 0;

	}

	i = 0;

	while (fscanf(fp,"%d",&values) != EOF)
	{
		printf("%d\n",values);

		i++;
	}


	printf("count = %d",i);

fclose(fp);

	return 0;
}