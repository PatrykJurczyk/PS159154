#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned n, int tab[])
{
    int ostatni = tab[0];
    for(int i=0; i<n-1; i++)
    {
        tab[i] = tab[i+1];
    }
    tab[n-1] = ostatni;
}

int main()
{
    int x = 5, tablica[] = {1,2,3,4,5};
    for(int i=0; i<x; i++)
    {
        printf("[%d]%d\n",i,tablica[i]);
    }
    printf("Przesunieta tablca: ");
    foo(x,tablica);
    printf("\n");
    for(int i=0; i<x; i++)
    {
        printf("[%d]%d\n",i,tablica[i]);
    }
    return 0;
}
