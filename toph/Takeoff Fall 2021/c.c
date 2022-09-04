#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a, d;
	scanf("%lf", &d);
	a = (3.1416 * (d / 2) * (d / 2) / 2) + d * d;
	printf("%.02lf", a);

	return 0;
}