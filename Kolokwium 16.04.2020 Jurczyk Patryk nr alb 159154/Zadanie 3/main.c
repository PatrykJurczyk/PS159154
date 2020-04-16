#include <stdio.h>
#include <stdlib.h>

int min2(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int min3(int a, int b, int c)
{
    int pom = min2(a,b);
    if(pom > c)
    {
        return c;
    }
    else
    {
        return pom;
    }
}

int main()
{
    int a,b,c;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    printf("Podaj c: ");
    scanf("%d",&c);
    printf("%d\n",min2(a,b));
    printf("%d\n",min3(a,b,c));

    return 0;
}
