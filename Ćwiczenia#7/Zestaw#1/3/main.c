#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int unsigned n)
{
    int wynik;
    for(int i=0; i*i*i*i<=n; i++)
    {
        wynik = i;
    }
    return wynik;
}
int main()
{
    int x;
    printf("Podaj liczbe: ");
    scanf("%d",&x);
    printf("Wynik jest rowny: %d",pierwiastek(x));
    return 0;
}
