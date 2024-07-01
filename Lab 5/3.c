#include <stdio.h>
int main ()
{
	int score, total,count;
	float avg;
	char name[20];
	total = 0;
	count = 0;

	

	FILE*player;

	player = fopen("./player.txt","r");

	if (player == NULL)
	{
		printf("Couldn't find the file location");
		return 0;
	}

	while (fscanf(player,"%s %d",&name,&score) != EOF)
	{
		count++;
			printf("%20s \t\t %6d\n",name,score);
			total = total + score;
			

	}
	

	printf("   Total runs scored \t\t %6d\n",total);

	avg = total / (float)count;

	printf("Average for the year \t\t %.2f",avg);

	fclose(player);






	return 0;
}