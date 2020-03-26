#include <stdio.h>
#include <stdlib.h>

int unsigned f(int unsigned x, int unsigned y)
{
    if(y == 0)
    {
        return x;
    }
    else
    {
        if(x >= y && y > 0)
        {
            return x-y + f(x-1,y) + f(x,y-1);
        }
    }
}

int main()
{
    int n,m;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Podaj liczbe: ");
    scanf("%d",&m);
    printf("Wynik jest rowny: %d",f(n,m));
    return 0;
}
