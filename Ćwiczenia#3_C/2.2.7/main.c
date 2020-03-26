#include <stdio.h>
#include <stdlib.h>

float potega(int x, int y)
{
    int z;
    int wynik;
    if(x > 0 && y > 0)
    {
        wynik = 1;
        for(int i=1; i<=y; i++)
        {
            wynik *= x;
        }
        return wynik;
    }
    if(x > 0 && y < 0)
    {
        z = y*(-1);
        wynik = 1;
        for(int i=1; i<=z; i++)
        {
            wynik *= x;
        }
        return (float)1/wynik;
    }
    if(x < 0 && y < 0)
    {
        y = y*(-1);
        wynik = 1;
        for(int i=1; i<=y; i++)
        {
            wynik *= x;
        }
        return (float)1/wynik;
    }
    if(x < 0 && y > 0)
    {
        wynik = 1;
        for(int i=1; i<=y; i++)
        {
            wynik *= x;
        }
        return wynik;
    }
    if(x == 0 || y == 0)
    {
        if(x == 0 && y != 0)
        {
            wynik = 0;
            return wynik;
        }
        if(x != 0 && y == 0)
        {
            wynik = 1;
            return wynik;
        }
    }
}


int main ()
{
    int n,m;
    printf("Podaj liczbe nieujemna n i m: ");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Liczba n^m jest rowna %0.2f",potega(n,m));
    return 0;
}
