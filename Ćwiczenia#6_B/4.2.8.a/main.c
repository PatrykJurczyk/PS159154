#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned x, int *tab1, int *tab2, double *tab3)
{
    for(int i=0; i<x; i++)
    {
        printf("%0.0lf", tab3[i] = (double)tab1[i]);
    }
    for(int i=x; i<(2*x); i++)
    {
        printf("%0.0lf", tab3[i] = (double)tab2[i-4]);
    }

}

int main()
{
    int x=4, tablica1[] = {9,2,6,3}, tablica2[] = {5,3,7,2};
    double tablica3[8];
    foo(x,tablica1,tablica2,tablica3);
    return 0;
}
