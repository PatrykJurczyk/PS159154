#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned n, int tab[])
{
    int tab1[n];
    for(int i=0; i<n; i++)
    {
        tab1[i] = tab[n-1-i];
    }
    for(int i=0; i<n; i++)
    {
        tab[i] = tab1[i];
    }
}

int main()
{
    int x=6;
    int tablica[] = {2,3,1,5,3,6};
    printf("Tablica od tyly to: ");
    printf("\n");
    for(int i=0; i<x; i++)
    {
        printf("[%d]%d\n",i,tablica[i]);
    }
    foo(x,tablica);
    printf("\n");
    for(int i=0; i<x; i++)
    {
        printf("[%d]%d\n",i,tablica[i]);
    }
    return 0;
}
