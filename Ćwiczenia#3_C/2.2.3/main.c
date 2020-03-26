#include <stdio.h>
#include <stdlib.h>

int dzielnik(int unsigned n)
{
    int k;
    for(int i=1; i<n; i++)
    {
        if(n%i == 0)
        {
            k = i;
        }
    }
    return k;
}
int main()
{
    int n;
    printf("Podaj liczbe n wypeksza od 2: ");
    scanf("%d", &n);
    if(n>2)
        printf("Dzielnik jest rowny %d",dzielnik(n));
    else
        printf("Podales za mala liczbe!!");
    return 0;
}
