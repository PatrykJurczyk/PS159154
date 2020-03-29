#include <stdio.h>
#include <stdlib.h>

int* blok(int n)
{
    if(n>0)
        return malloc(n*sizeof(int));
    else
        return 0;
}

int main()
{
    int b = 1;
    printf("%p",blok(b));
    return 0;
}
