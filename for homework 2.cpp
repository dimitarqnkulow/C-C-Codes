#include<stdio.h>

int main()
{


	for (int row = 1;row <= 7;row++)
	{

		if (row == 1 || row == 7)

		printf("  *\n");

		if (row == 2 || row == 6)

		printf(" * *\n");

		if(row == 3 || row == 4 || row == 5)

		printf("*   *\n");
	
	}
	return 0;
}