#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][100], int unsigned n)
{
    int wynik = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            tab[i][j] = rand() % 100+1;
            wynik += tab[i][j];
        }
    }
    return wynik;
}

int main()
{
    int tablica[50][100];
    printf("%d",foo(tablica,50));
    return 0;
}
