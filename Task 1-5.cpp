#include<stdio.h>

int main()

{
	/*TASK №1*/
	{signed int q = -250;

	int w = 250;

	long long int e = 4589398;

	unsigned long long int r = 10000000000000000000;

	signed long long int t = -9000000000000000000;

	printf("%d,%d,%lld,%lld,%lld\n", q, w, e, r, t);
	}


	/*TASK №2*/
	{
		unsigned short int a = 43112;

		int s = -1357674;

		int d = 1357674;

		int f = -1357674000;

		long long int g = 3657895000; /*tuk pri men unsigned int ima razlichna stoinost zatowa se nalga da polzvam long*/

		printf("%d,%d,%d,%d,%lld\n", a, s, d, f, g);
	}


	/*TASK №3*/
	{
		double z = 4.9876543;

		double x = 7.123456789012345678890;

		signed long double c = 18398458438583853.28;

		signed long double v = 18398458438583853.39875937284928422;

		printf("%.7lf,%.19lf,%.2Lf,%Lf\n", z, x, c, v);
	}

	/*TASK №4*/
	{enum weekdays { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

	printf("Number of months: %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n\n", January, February, March, April, May, June, July, August, September, October, November, December);
	}

	/*TASK №5*/
	{enum companyemp { Ivan = 1, Stoyan = 2, Peter = 3, Milen = 4, Ognyan = 5 };

	enum companyemp name1, name2, name3, name4, name5;

	name1 = Ivan;

	name2 = Stoyan;

	name3 = Peter;

	name4 = Milen;

	name5 = Ognyan;

	printf("Number of employes:%d,%d,%d,%d,%d\n", name1, name2, name3, name4, name5);
	}

	return 0;
}