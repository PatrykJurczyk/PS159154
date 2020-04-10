#include <stdio.h>
#include <stdlib.h>
void wypisz(int tab[], int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%d", tab[i]);
    }
}

void foo(int unsigned n, int tab1[], int tab2[], int tab3[])
{
    int x;
    for(int i=0; i<n; i++)
    {
        if(tab2[i]<tab3[i] && tab2[i] < tab1[i])
        {
            tab3[i] = tab2[i];
        }
        if(tab1[i]<tab3[i] && tab1[i] < tab2[i])
        {
            tab3[i] = tab1[i];
        }
        if(tab3[i]<tab1[i] && tab3[i] < tab2[i])
        {
            tab3[i];
        }
    }
}

int main()
{
    int x=4, t1[] = {4,6,6,5}, t2[] = {7,5,4,3}, t3[] = {9,1,7,8};
    foo(x,t1,t2,t3);
    wypisz(t3,x);
    return 0;
}
