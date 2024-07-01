/*Auther : G.A.D.D.GANEPOLA
Created date : 11/19/2021
Modified date : 11/19/2021
Purpose : Display int, float, double min and max values
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
/*int intsize;
float floatsize;
double doublesize;*/

printf("Maximum integer number can store = %d\n",INT_MAX);
printf("Minimum integer number can store = %d\n",INT_MIN);
printf("Maximum float number can store = %f\n",FLT_MAX);
printf("Minimum float number can store = %f\n",-FLT_MIN);
printf("Maximum double number can store = %lf\n",DBL_MAX);
printf("Minimum double number can store = %lf\n",DBL_MIN);










return 0;
}