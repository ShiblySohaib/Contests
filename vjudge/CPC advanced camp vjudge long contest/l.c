#include<stdio.h>
int main()
{
	int c, t, s, d,sum;
	scanf("%d", &t);
	for(c=1;c<=t;c++)
	{
		sum = 0;
		scanf("%d", &s);
		while (s > 0)
		{
			scanf("%d", &d);
			if (d < 0)
				d = 0;
			sum = sum + d;
			s--;
		}
		printf("Case %d: %d\n", c, sum);
	}

	return 0;
}
