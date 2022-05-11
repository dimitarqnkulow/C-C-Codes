#include<stdio.h>

int main()
{
	int x = 10;

	do {

		printf("%d\n", x);

		x++;
	} while (x >= 10 && x <= 20);

	return 0;
}