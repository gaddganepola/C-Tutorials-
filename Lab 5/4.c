#include <stdio.h>
int main ()
{
	int score, total,count;
	float avg;
	char name[20];
	total = 0;
	count = 0;

	

	FILE*player;
	FILE*process;

	player = fopen("./player.txt","r");

	process = fopen("processed_data.txt","w");

	if (player == NULL)
	{
		printf("Couldn't find the file location");
		return 0;
	}

	while (fscanf(player,"%s %d",&name,&score) != EOF)
	{
		count++;
			fprintf(process,"%20s \t\t %6d\n",name,score);
			total = total + score;
			

	}
	

	fprintf(process,"   Total runs scored \t\t %6d\n",total);

	avg = total / (float)count;

	fprintf(process,"Average for the year \t\t %.2f",avg);

	fclose(player);
	fclose(process);






	return 0;
}