#include<stdio.h>

int main()
{
    int t;
    long long int n,sum;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%lld", &n);
        sum = 1 + (n - 1) * (n - 2);
        printf("%lld\n", sum);
        t--;
    }


    return 0;
}
