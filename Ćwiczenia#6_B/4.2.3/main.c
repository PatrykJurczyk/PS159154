#include <stdio.h>
#include <stdlib.h>

double srednia(int unsigned x, const int tab[])
{
    double wynik = 0;
    for(int i=0; i<x; i++)
    {
        wynik += tab[i];
    }
    wynik = wynik/x;
    return wynik;
}

int main()
{
    int x = 5, tablica[] = {3,6,4,9,1};
    printf("Srednia jest rowna: %0.2f",srednia(x,tablica));
    return 0;
}
