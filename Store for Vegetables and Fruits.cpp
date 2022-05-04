#include<stdio.h>

int main()
{ /*Fresh products*/
	float tom = 4.50;
	float cucum = 2.80;
	float apples = 2.50;
	float cherries = 5.60;

	/*Weight of the products*/
	float tomkilos;
	float applekilos;

	/*Total*/

	

	printf("Hello, welcome to our store! Today we have fresh tomatos,cucumbers, apples and cherries.\n");

	printf("-Very nice! I need some fresh tomatoes for launch, and some apples for the kids.\n");

	printf("How much kilos?\n");

	printf("-I need 3 kilos of tomatoes, and 1.5 kilos apples. Thank you!\n");

	scanf_s("%f", &tomkilos);
	
	float totaltom = tom * tomkilos;

	printf("Price for the tomatos: %.2f lv.", totaltom);

	scanf_s("%f", &applekilos);

	float totalapples = apples * applekilos;

	printf("Price for the apples: %.2f lv.", totalapples);

	float totalprice = totaltom + totalapples;

	printf("You owe %.2f.\n", totalprice);

	return 0;
}
