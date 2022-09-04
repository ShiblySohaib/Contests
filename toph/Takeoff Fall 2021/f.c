#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	long long int t, l, r, d, lv, rv;
	scanf("%lld", &t);
	while (t)
	{
		scanf("%lld%lld%lld", &l, &r, &d);
		rv = r / 10 + (r % 10 >= d);
		lv = l / 10 + (l % 10 > d);
		printf("%lld\n", rv - lv);
		t--;
	}


	return 0;
}
