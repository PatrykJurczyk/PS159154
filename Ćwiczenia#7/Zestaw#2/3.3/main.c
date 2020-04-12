#include <stdio.h>
#include <stdlib.h>

float potega(int unsigned n)
{
    int wynik = 1;
    if(n == 0)
    {
        return 1;
    }
    for(int i=1; i<=n; i++)
    {
        wynik *= 4;
    }
    return 1.0/wynik;
}

int main()
{
    int x;
    printf("Podaj liczbe n: ");
    scanf("%d",&x);
    printf("Wynik jest rowny: %0.2f",potega(x));
    return 0;
}
