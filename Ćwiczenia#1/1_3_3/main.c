#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d",&a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d",&b);
    printf("Podaj trzecia liczbe calkowita: ");
    scanf("%d",&c);
    max = a;
    if (b>max) b = max;
    if (c>max) c = max;
    printf("%d", max);
    return 0;
}

