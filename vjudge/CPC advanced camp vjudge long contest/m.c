#include<stdio.h>
int main()
{
	int h,m;
	double h1,m1;
	scanf("%d:%d",&h,&m);
	h1=(h%12)*30+m*0.5;
	m1=m*6;
	printf("%g %g",h1,m1);

	return 0;
}
