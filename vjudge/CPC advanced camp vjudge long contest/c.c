#include<stdio.h>
int main()
{
		int t,c,x1,y1,x2,y2,x,y,cow;
		scanf("%d", &t);
		for(c=1;c<=t;c++)
		{
			scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &cow);
			printf("Case %d:\n",c);
			while (cow > 0)
			{
				scanf("%d%d", &x, &y);
				if (x > x1 && x<x2 && y>y1 && y < y2)
				{
					printf("Yes\n");
				}
				else
				{
					printf("No\n");
				}
					cow--;
			}
		}
		return 0;
}
