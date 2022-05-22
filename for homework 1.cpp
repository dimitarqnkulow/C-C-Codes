#include<stdio.h>

int main()

{
	int n;

	int x;

	int sum = 0;

	scanf_s("%d", &n);

	for (;n > 0;n++)
	{
		if (n > 10) break;
		x = n * n;

		sum = sum + x;

	}
	printf("%d\n", sum);

	return 0;
}