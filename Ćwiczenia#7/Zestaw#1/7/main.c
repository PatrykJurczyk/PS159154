#include <stdio.h>
#include <stdlib.h>

int foo(int tab[])
{
    int wynik = 0;
    for(int i=0; i<=7; i++)
    {
        if(tab[i]%7==0)
        {
            wynik++;
        }
    }
    return wynik;
}

int main()
{
    int t[] = {7,14,5,49,5,56,42};
    printf("Wynik jest rowny: %d",foo(t));
    return 0;
}
