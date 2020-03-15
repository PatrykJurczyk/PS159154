#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int wynik = 1;
    int wynik2 = 0;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n; i<=m; i++)
    {
        wynik *= i;
    }
    wynik2 += wynik;
    printf("Wynik jest rowny: %d",wynik2);
    return 0;
}
