#include <stdio.h>
#include <stdlib.h>

int foo(int tab[])
{
    int wynik = 0;
    for(int i=0; i<=7; i++)
    {
        if(tab[i]%7 == 0 && tab[i]%3 == 0)
        {
            wynik ++;
        }
    }
    return wynik;
}

int main()
{
    int t[] = {7,49,21,2,4,9,91};
    printf("Wynik jest rowny: %d",foo(t));
    return 0;
}
