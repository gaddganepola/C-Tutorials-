#include <stdio.h>

int main ()
{
	int i;
	int v[i];
	 

	FILE*fi;

	fi = fopen("data.txt","r");

	if (fi == NULL)
	{
		printf("couldnt find file location");
		return 0;
	}

	i = 0;

	while(fscanf(fi,"%d",&v[i]) != EOF)
	{

		printf("value %2d = %3d\n",i+1,v[i]);
		printf("i = %d",i);


		i++;

		printf("i = %d",i);
	
	}
		printf("end");


	fclose(fi);

	printf("end");


	return 0;
}