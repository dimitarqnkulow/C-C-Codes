#include<stdio.h>
#include<string.h>

int main()
{
	int repeat;

	scanf_s("%i", &repeat);

	if (repeat == 6)
	{
		printf("Do the exercises with maximum weight for strenght.");
	}

	else if (repeat == 20)
	{
		printf("Do the exercises with low weight for stamina.");
	}

	else (repeat == 15);
	{
		printf("Do the exercises with temperance weight for tone.");
	}
	return 0;
}