#include <stdio.h>
#include <stdlib.h>


void foo(int unsigned n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(tab[j]<tab[j+1])
            {
                int x = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = x;
            }
        }
    }
}

int main()
{
    int x=5, tablica[] = {2,4,2,1,3};
    foo(x,tablica);
    return 0;
}
