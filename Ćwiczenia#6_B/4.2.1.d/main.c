#include <stdio.h>
#include <stdlib.h>

void wypisz(int x, int tab[])
{
    for(int i=0; i<x; i++)
    {
        if(tab[i]>0)
        {
            tab[i];
        }
        else
        {
            tab[i]*=(-1);
        }
    }
}

void wypisz1(int x, int *tab)
{
    for(int i=0; i<x; i++)
    {
        *(tab+i)=i;
    }
}

int main()
{
    int tablica[5] = {3,-9,8,6,-8};
    wypisz(5,tablica);
    for(int i=0; i<5; i++)
    {
        printf("%d\n",tablica[i]);
    }
    return 0;
}
