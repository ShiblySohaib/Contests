#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, l, c, t;
	scanf("%d", &t);
	for(c=1;c<=t;c++)
	{
		scanf("%d%d", &i, &l);
		printf("Case %d: %d\n",c, 4 * abs(i - l) + 4 * i + 19);
	}

	return 0;
}
