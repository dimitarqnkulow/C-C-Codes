#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	float tomatos = 3.50;
	float bananas = 4.50;
	float pepper = 1.20;
	float orange = 2.75;

	float wTomatos;
	float wBananas;
	float wPepper;
	float wOrange;

	printf("Hello, may I help you with your choice?\n\n");

	printf("-Yes, please! I am looking for the freshest vegetables and fruits.\n\n");

	printf("Okay the freshest are tomatos, peppers, bananas and oranges.\n\n");

	printf("-May I have 3 kilos of tomatos, 1 kilo banans and 2 kilos peppers. Thank you!\n\n");
	
	scanf_s("\n%f*[^\n]", &wTomatos);


	scanf_s("\n%f*[^\n]", &wBananas);


	scanf_s("\n%f*[^\n]", &wPepper);


	float totalprice = bananas * wBananas + tomatos * wTomatos + pepper * wPepper;


	printf("%f", totalprice);

	if (totalprice > 20 && totalprice<30)
	{
		totalprice = totalprice - (totalprice * 0.02);

		printf("%f", totalprice);
		}

	else if (totalprice > 30)
	{
		printf("We are giving you an extra 1 kilo form a prodcut you want.\n);
	}

	else
	{ 
		totalprice == totalprice;

			printf("%f", totalprice);
	}
	return 0;
}