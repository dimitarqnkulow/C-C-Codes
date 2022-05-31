#include<stdio.h>

int main()

{
	int ddigit[20];

	int i;

	int count = 0;

	for (i = 0;i < 20;i++)
	{
		scanf_s("%d", &ddigit[i]);

		if (ddigit[i] > 10 && ddigit[i]<100)
		{
			count += 1;
		}
	}
	printf("Double digit numbers it array are %d.", count);
}