#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int t;
	long long int x, y, a, b, w, l, chair;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%lld%lld%ld%lld", &x, &y, &a, &b);
		l = x / a;
		w = y / b;
		chair = l * w;
		printf("%lld\n", chair);
		t--;
	}

	return 0;
}
