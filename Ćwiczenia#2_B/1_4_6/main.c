#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int wynik = 1;
    printf("Powdaj liczbe wieksza od 2: \n");
    scanf("%d", &n);
    if(n<2)
    {
        printf("Podales zla liczbe :(");
    }
    else
    {
    for(int i=2; i<=n; i = i+2)
    {
        wynik *= i;
    }
        printf("Wynik jest rowny: %d", wynik);
    }
    return 0;
}
