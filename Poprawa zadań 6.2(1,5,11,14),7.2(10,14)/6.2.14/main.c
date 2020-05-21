#include <stdio.h>
#include <stdlib.h>
int foo(int tab[100][100][100])
{
    int wynik = 0;
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            for(int k=0; k<100; k++)
            {
                tab[i][j][k] = rand() % 100 + 1;
                wynik += tab[i][j][k];
            }
        }
    }
    return wynik;
}


int main()
{
    int tab[100][100][100];
    printf("Wynik jest rowny: %d",foo(tab));
    return 0;
}
