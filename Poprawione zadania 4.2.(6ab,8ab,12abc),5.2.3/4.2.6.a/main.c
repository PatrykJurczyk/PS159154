#include <stdio.h>
#include <stdlib.h>

void wypisz(int unsigned x, int tab1[], int tab2[])
{
    for(int i=0; i<x; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    int n=5;
    int tablica1[5]={1,2,3,4,5};
    int tablica2[5]={1,2,1,2,1};
    wypisz(n,tablica1,tablica2);
    for (int i = 0; i<n; i++)
    {
        printf("%d",tablica1[i]);
    }
    printf ("\n");
    for (int i = 0; i<n; i++)
    {
        printf("%d",tablica2[i]);
    }
    return 0;
}
