#include<stdio.h>
int main()
{
	int t, x;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d", &x);
		if (x >= 1 && x < 100)
		{
			printf("Easy\n");
		}
		else if (x >= 100 && x < 200)
		{
			printf("Medium\n");
		}
		else
		{
			printf("Hard\n");
		}

		t--;
	}

	return 0;
}
