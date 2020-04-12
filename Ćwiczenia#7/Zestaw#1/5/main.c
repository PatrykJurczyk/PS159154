#include <stdio.h>
#include <stdlib.h>

int foo(int unsigned n, int unsigned m)
{
    if(m==0)
    {
        return 2;
    }
    if(n==0)
    {
        return m;
    }
    return (foo(n-1,m) * foo(n,m-1)) + 7;
}

int main()
{
    int x,y;
    printf("Podaj dwie liczby: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Wynik jest rowny: %d",foo(x,y));
    return 0;
}
