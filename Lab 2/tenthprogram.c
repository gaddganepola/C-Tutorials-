/*Auther : G.A.D.D.GANEPOLA
Created date : 11/19/2021
Modified date : 11/19/2021
Purpose : Calculate area and circumference of a circle and display 
*/
#include <stdio.h>
int main()
{

//define constant
const float PI = 3.14519;
//variable declaration
float area, circumference, radious;

//assign values
radious = 12;

area = PI*radious*radious;

circumference = 2*PI*radious;

//display output
printf("Area of the circule = %f\n",area);
printf("Circumference of the circule = %f\n",circumference);





return 0;
}