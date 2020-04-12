#include <stdio.h>
#include <stdlib.h>

void min4(int *x, int *y)
{
    if(*x < *y)
    {
        *y = *x;
        printf("x = %d\n",*x);
        printf("y = %d\n",*y);
    }
    else
    {
        *x = *y;
        printf("x = %d\n",*x);
        printf("y = %d\n",*y);
    }
}

int main()
{
    int x=9, y=32;
    int z=8, q=10;
    min4(&x,&y);
    min4(&z,&q);
    return 0;
}
