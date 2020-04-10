#include <stdio.h>
#include <stdlib.h>

void wypisz(int x, int tab[])
{
    for(int i=0; i<x; i++)
    {
        tab[i]=(i*2);
    }
}

void wypisz1(int x, int *tab)
{
    for(int i=0; i<x; i++)
    {
        *(tab+i)=(i*2);
    }
}

int main()
{
    int tablica[5];
    wypisz(5,tablica);
    for(int i=0; i<5; i++)
    {
        printf("%d\n",tablica[i]);
    }
    return 0;
}
