#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000], c[10001];
	int p,i=0;
	scanf("%s%d%s", &s, &p, &c);
	for (i = 0; i < strlen(c); i++)
	{
		switch(c[i])
		{
			case 'L': p--; break;
			case 'R': p++; break;
			default: printf("%c",s[p-1]); break;
		}
	}

	return 0;
}
