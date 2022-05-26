#include<stdio.h>
#include<stdbool.h>
int main()

{
	int num1[20] = { 1,2,3,4,5,6,7,8,9,10,10,9,8,7,6,5,4,3,2,1 };
	int i;
	bool flag = true;

	for (i = 0;i < 20;i++)
	{
		if (num1[i] != num1[19 - i])
		{
			flag = false;
		}
	}
	if(flag==true)
		{		
		printf("Comparison [%d]= Yes\n",i);
		}
		else
		{
			printf("Comparison [%d]= No\n", i);
		}
	
}