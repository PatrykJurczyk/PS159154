#include <stdio.h>
#include <stdlib.h>

int bezwzgledna(int x)
{
    if(x < 0)
    {
        return x*(-1);
    }
    else
    {
        return x;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);
    printf("Wartosc bezwzgledna liczby n jest rowna: %d", bezwzgledna(n));
    return 0;
}
