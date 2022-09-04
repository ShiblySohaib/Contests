#include<stdio.h>

int main()
{
    int i,x=1;
    char a[100];
    scanf("%s", &a);
    for (i = 1; i < strlen(a); i++)
    {
        if (a[i] > 96 && a[i]<123)
        {
            x = 0;
            break;
        }
    }
    if (x == 1)
    {
        for (i = 0; i < 100; i++)
        {
            if (a[i] >= 97 && a[i] <= 122)
            {
                a[i] -= 32;
            }
            else if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] += 32;
            }
            else
            {
                break;
            }
        }
    }
    printf("%s", a);

    return 0;
}
