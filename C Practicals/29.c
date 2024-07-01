#include <stdio.h>
 int main ()
 {
 	char name[1];

 	FILE*f;

 	f = fopen("name.txt","r");

 	fgets(name, 60, f);

 	printf("%s",name);

 	fclose(f);









 	return 0;
 }