#include <stdio.h>
#include <stdlib.h>

int fun(int a)
{
    return a;
}

int foo(int (*fun)(int), int x, int y)
{
    if(fun(x) % 5 == fun(y) % 5)
    {
        return 1;
    }
    return -1;
}

int main()
{
    int x, y;
    printf("Podaj x: ");
    scanf("%d",&x);
    printf("Podaj y: ");
    scanf("%d",&y);
    printf("%d",foo((&fun),x,y));
    return 0;
}
