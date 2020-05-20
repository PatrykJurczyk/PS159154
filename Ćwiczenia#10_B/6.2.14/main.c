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
                wynik += tab[i][j][k];
            }
        }
    }
    return wynik;
}


int main()
{
    return 0;
}
