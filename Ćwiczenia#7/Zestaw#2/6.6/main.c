#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n)
{
    if(n == 0 || n == 1)
    {
        return 2;
    }
    if(n%2 == 0)
    {
        return 2*foo(n-1) - 2;
    }
    if(n%2 == 1)
    {
        return -foo(n-1) + 3;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Wynik jest rowny: %d",foo(n));
    return 0;
}
