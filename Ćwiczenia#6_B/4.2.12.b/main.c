#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned n, int tab[])
{
    int ostatni = tab[0];
    for(int i=0; i<n-1; i++)
    {
        printf("%d",tab[i] = tab[i+1]);
    }
    printf("%d",tab[n-1] = ostatni);
}

int main()
{
    int x = 5, tablica[] = {1,2,3,4,5};
    printf("Przesunieta tablca: ");
    foo(x,tablica);
    return 0;
}
