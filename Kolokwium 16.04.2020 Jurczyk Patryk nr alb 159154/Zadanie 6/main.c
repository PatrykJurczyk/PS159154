#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n, int tab1[], int tab2[])
{
    int wynik1 = tab1[0];
    int wynik2 = tab2[0];
    int wynik3 = 0;
    for(int i=0; i<n; i++)
    {
        if(tab1[i] > tab1[0])
        {
            wynik1 = tab1[i];
        }
        if(tab2[i] > tab2[0])
        {
            wynik2 = tab2[i];
        }
    }
    return wynik3 = wynik1 + wynik2;
}

int main()
{
    int n = 4, t[] = {5,4,7,2}, t1[] = {9,3,4,5};
    printf("Wynik jest rowny: %d",foo(n,t,t1));
    return 0;
}
