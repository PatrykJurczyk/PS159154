#include <stdio.h>
#include <stdlib.h>

int fib(int unsigned x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Wynik jest rowny: %d",fib(n));
    return 0;
}
