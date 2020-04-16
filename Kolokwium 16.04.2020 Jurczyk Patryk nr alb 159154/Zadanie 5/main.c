#include <stdio.h>
#include <stdlib.h>

static int suma(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + suma(n-1);
}

int main()
{
    int n = 25;
    printf("%d",suma(n));
    return 0;
}
