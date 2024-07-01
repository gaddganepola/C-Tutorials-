#include <stdio.h>
int main ()
{
	int numbers[20], i;

	FILE*f;

	f = fopen("./marks.txt","r");

	if (f == NULL)
	{
		printf("Could't find the file location");
		return 0;
	}

	for (i = 0; i < 20; i++)
	{
		fscanf(f,"%d",&numbers[i]);
		printf("numbers[%2d] = %3d\n",i,numbers[i]);
	}

fclose(f);





	return 0;
}