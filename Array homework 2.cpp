#include<stdio.h>

int main()

{
	int num[10] = { 22,13,6,25,18,3,20,17,10,9 };

	int biggest = num[0];

	int i;

	for (i = 1; i < 10; i++)
	{
		if (biggest < num[i])

			biggest = num[i];
	}
	printf("%d", biggest);

	return 0;
}