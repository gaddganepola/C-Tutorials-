#include <stdio.h>

void print_box (int height, int width);


int main ()

{
	int height, width;
	
	printf("enter height and width : ");
	scanf("%d %d",&height,&width);
	print_box (height,width);

	return 0;
}
void print_box (int height, int width)
{
	int i, j;


	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}