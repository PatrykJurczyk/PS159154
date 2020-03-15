#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int wynik;
    printf("Podaj liczbe calkowita: \n");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Podales zla liczbe!");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(i*i<=n)
            {
                wynik = i;
            }
        }
        printf("Wynik: %d",wynik);
    }

    return 0;
}
