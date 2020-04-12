#include <stdio.h>
#include <stdlib.h>

int foo(int x, int tab[], int tab1[])
{
    int wynik = tab[0];
    int z = 0;
    int wynik1 = tab1[0];
    int q = 0;
    for(int i=0; i<=x; i++)
    {
        if(tab[i] < wynik)
        {
            wynik = tab[i];
            z = i;
        }
        if(tab1[i] < wynik1)
        {
            wynik1 = tab1[i];
            q = i;
        }
    }
    if(z == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x=5, t[]  = {4,4,3,6,7}, t1[] = {2,7,1,3,9};
    printf("Wynik jest rowny: %d",foo(x,t,t1));
    return 0;
}
