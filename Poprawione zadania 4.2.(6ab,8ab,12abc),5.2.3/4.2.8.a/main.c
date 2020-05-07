#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned x, int *tab1, int *tab2, double *tab3)
{
    for(int i=0; i<x; i++)
    {
        tab3[i] = (double)tab1[i];
    }
    for(int i=x; i<(2*x); i++)
    {
        tab3[i] = (double)tab2[i-x];
    }
}

int main()
{
    int x=6, tablica1[] = {9,2,6,3,8,5}, tablica2[] = {5,3,7,2,6,7};
    double tablica3[] = {1,2,3,4,5,6,7,8,9,9,8,7};
    foo(x,tablica1,tablica2,tablica3);
    for(int i=0; i<2*x; i++)
    {
        printf("%0.0f",tablica3[i]);
    }
    return 0;
}
