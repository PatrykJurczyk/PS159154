#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int wynik;
    wynik = 1;
    printf("Podaj liczbe calkowita dodatnia: \n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Wynik 0! jest rowny 1.\n");
    }
    for(int i=1; i<=n; i++)
    {
        wynik *=i;
    }
    printf("Wynik jest rowny: %d", wynik);
    return 0;
}
