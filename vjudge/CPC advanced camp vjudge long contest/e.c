#include<stdio.h>
#include<math.h>
int main()
{
	int h,m;
	double h1,m1,a;
	scanf("%d %d",&h,&m);
	h1=(h%12)*30+m*0.5;
	m1=m*6;
	a=fabs(h1-m1);
	if(a>180)
		a=360-a;
	printf("%.7lf",a);

	return 0;
}
