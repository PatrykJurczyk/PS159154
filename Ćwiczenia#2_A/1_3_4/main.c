#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int max;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%i",&a);
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%i",&b);
    max = abs(a);
    if (max<abs(b))
        max = b;
    printf("Wieksza wartosc bezwzgledna jest rowna: %i", max);

    return 0;
}
