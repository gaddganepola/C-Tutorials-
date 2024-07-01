#include <stdio.h>

int main ()
{
	FILE*f;

	f = fopen("./out.txt","a");

	fprintf(f,"I'm Dinethra Dayan.\n");
	fprintf(f,"I live in Ambagaspitiya.\n");
	fprintf(f,"I studies in Bandaranayake college Gampaha");
	fprintf(f,"I'm Dinethra Dayan.\n");
	fprintf(f,"I live in Ambagaspitiya.\n");
	fprintf(f,"I studies in Bandaranayake college Gampaha");

	fclose(f);





	return 0;
}