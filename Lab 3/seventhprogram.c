#include <stdio.h>

int main ()
{
	float unit_price1, unit_price2, unit_price3;
	float quantity1, quantity2, quantity3;
	float total1, total2, total3, total;

	printf("Enter unite price for item 01 : ");
	scanf("%f",&unit_price1);
	printf("enter the quantity for item 01 : ");
	scanf("%f",&quantity1);
	printf("Enter unite price for item 02 : ");
	scanf("%f",&unit_price2);
	printf("enter the quantity for item 02 : ");
	scanf("%f",&quantity2);
	printf("Enter unite price for item 03 : ");
	scanf("%f",&unit_price3);
	printf("enter the quantity for item 03 : ");
	scanf("%f",&quantity3);

	printf("\n");

	total1 = unit_price1 *  quantity1;
	total2 = unit_price2 *  quantity2;
	total3 = unit_price3 *  quantity3;
	total = total1 + total2 + total3;

	printf("***** Welcome to the ABC Store *****\n");
	printf("\n");
	printf("--------------------------------------\n");
	printf("Unit ID \tUnit Price    subtotal\n");
	printf("--------------------------------------\n");
	printf("uNIT 01 \t  %3.2f  \t%3.2f\n",unit_price1, total1);
	printf("uNIT 02 \t  %3.2f  \t%3.2f\n",unit_price2, total2);
	printf("uNIT 03 \t  %3.2f  \t%3.2f\n",unit_price3, total3);
	printf("--------------------------------------\n");
	printf("Total : \t\t\t%3.2f\n",total);
	printf("--------------------------------------\n");







	return 0;
}