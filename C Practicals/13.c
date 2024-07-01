#include <stdio.h>
int main()
{
	int values[10];
	int i, j;
	j = 0;


	/*printf("value 1 = %d\n",values[0]);
	printf("value 1 = %d\n",values[1]);
	printf("value 1 = %d\n",values[2]);
	printf("value 1 = %d\n",values[3]);
	printf("value 1 = %d\n",values[4]);
	printf("value 1 = %d\n",values[5]);
	printf("value 1 = %d\n",values[6]);
	printf("value 1 = %d\n",values[7]);
	printf("value 1 = %d\n",values[8]);
	printf("value 1 = %d\n",values[9]);*/

	for(i = 0; i <= 10; i++)
		printf("value %d = %d\n",++j,values[i]);
	
	



	return 0;
}