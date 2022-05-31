#include<stdio.h>

int main()

{

	char s[7] = { 'a','1','$','A','&','+','d' };

	int i;

	for (i = 0;i < 7;i++)
	{
		if (s[i] == 65)
		{
			printf("Position of 'A' is %d.", i+1);
		}
	}

	return 0;
}