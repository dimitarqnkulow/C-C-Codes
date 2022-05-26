#include<stdio.h>

int main()

{
	int oddnum[10] = { 22,13,6,25,18,3,20,17,10,9 };

	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
		{
			printf("Oddnum[%d]=%d\n", i, oddnum[i]);
		}
	}


}