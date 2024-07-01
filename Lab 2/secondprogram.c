#include <stdio.h>
/*Auther : G.A.D.D.GANEPOLA
Created date : 11/19/2021
Modified date : 11/19/2021
Purpose : Create variables to store the following information:
	o Your birth year.
	o A/L Z-Score.
	o Your Letter grade for the A/L Physics or any other subject
*/
 
int main()
{
//variable declaration
int month, date, year;
float z_score;
char grade;

//assigning values
month = 04;
date = 03;
year = 2000;

z_score = 1.0165;

grade = 'C';

//output

printf("My birthday %d/%d/%d\n",month, date, year);
printf("z score = %.4f\n",z_score);
printf("Grade for A/L Physics %c\n",grade);
 








return 0;
}