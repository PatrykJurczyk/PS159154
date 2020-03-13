#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int a;
    printf("Podaj liczbe calkowita: \n");
    scanf("%d", &n);
    if (n<0)
    {
        a = n*(-1);
        printf("Twoja wartosc bezwzgledna to: %d", a);
    }
    else
    {
        printf("Twoja wartosc bezwzglednato: %d", n);
    }
    return 0;
}
