#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned n, int tab[])
{
    int tab1[n];
    tab1[0] = tab[n-1];
    for(int i=0; i<n; i++)
    {
        tab1[i+1] = tab[i];
    }
    for(int i=0; i<n; i++)
    {
        tab[i] = tab1[i];
    }
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
