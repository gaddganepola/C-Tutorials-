#include <stdio.h>

int main ()
{
	

	char line [50] [100];

	int i;

	FILE*f;

	f = fopen("./para.txt","r");

	i = 0;

	while(fgets(line[i], 90, f))
	{
		printf("line[%d] %s\n",i,line[i]);
		i++;
	}

	

	fclose(f);


	





	return 0;
}