#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int wynik = 0;
    printf("Podaj liczbe calkowita dodatnia: \n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        wynik += pow(i,2);
    }
    printf("Wynik jest rowny: %d", wynik);
    return 0;
}
