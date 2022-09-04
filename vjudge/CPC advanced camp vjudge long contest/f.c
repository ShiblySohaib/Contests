#include<stdio.h>
int main()
{
	int t, s;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d", &s);
		switch (s%4)
		{
		case 1:
			printf("East\n");
			break;
		case 2:
			printf("South\n");
			break;
		case 3:
			printf("West\n");
			break;
		default:
			printf("North\n");
			break;
		}

		t--;
	}

	return 0;
}
