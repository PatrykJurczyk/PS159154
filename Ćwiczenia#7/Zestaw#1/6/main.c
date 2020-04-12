#include <stdio.h>
#include <stdlib.h>

int foo(int x, int tab[], int tab1[])
{
    for(int i=0; i<x; i++)
    {
        if(tab[i] == tab1[i])
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int x = 5, t[] = {2,3,4,5,6}, t1[] = {3,3,4,5,6};
    printf("%d",foo(x,t,t1));

    return 0;
}
