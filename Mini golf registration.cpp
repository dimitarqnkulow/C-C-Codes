#include<stdio.h>

int main()

{/*
 char b- balls
 char p- players
 float ppg- price per game
 float tincome- total income for the day
 */

	char b= 20;

	b = b - 2;
	b = b - 5;
	b = b - 3;
	b = b + 2;
	b = b - 4;
	b = b - 6;
	b = b + 5;
	b = b - 2;

	printf("Remaining balls at the end of the day: %d\n", b);
	
	char p = 20 - b;

	printf("Teams at the field now: %d\n", p);

	float ppg = 3.50;
	float tincome = ppg * 2 + ppg * 5 + ppg * 3 + ppg * 4 + ppg * 6 + ppg * 2;

	printf("Total money in the checkout: %.2f\n", tincome);

	return 0;

}