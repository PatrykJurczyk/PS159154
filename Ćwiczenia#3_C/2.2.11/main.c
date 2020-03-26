#include <stdio.h>
#include <stdlib.h>

int pierwistek(int unsigned x)
{
    int wynik = 0;
    for(int i=0; i<=x; i++)
    {
        if(i*i<=x)
        {
            wynik = i;
        }
    }
    return wynik;
}

int suma(int unsigned y)
{
    int wynik = 0;
    for(int i=0; i<=y; i++)
    {
        wynik += pierwistek(i);
    }
    return wynik;
}


int main()
{
    int n;
    printf("Podaj liczbe n spod pierwiaska: ");
    scanf("%d",&n);
    printf("Suma pierwiastekow do n to: %d", suma(n));
    return 0;
}

