#include <stdio.h>
#include <stdlib.h>

int* min(int*a, int*b)
{
    if(*a < *b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    printf("Mniejsza watrosc to: %p",min(&a,&b));
    return 0;
}
