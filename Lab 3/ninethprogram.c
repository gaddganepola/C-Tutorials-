#include <stdio.h>
int main ()
{
	int h_pay_rate, worked_hours;

	float ot_rate,salary;

	//salary = 0;

	printf("Enter Hourly Pay Rate : ");
	scanf("%d",&h_pay_rate);
	printf("Enter the overtime pay rate : ");
	scanf("%f",&ot_rate);
	printf("Enter the Hours worked : ");
	scanf("%d",&worked_hours);

	salary = (h_pay_rate) * (worked_hours);

	printf("Your weekly salary is : %.2f",salary);









	return 0;
}