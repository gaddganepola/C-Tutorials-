#include <stdio.h>

int main ()
{
	int v, i;

	FILE*fi;

	fi = fopen("data.txt","r");

	for(i = 0; i < 20; i++)
	{

		fscanf(fi,"%d",&v);

		printf("value %2d = %3d \n",i+1,v);
	}

	fclose(fi);


	return 0;
}