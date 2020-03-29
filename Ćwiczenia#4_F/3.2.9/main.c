#include <stdio.h>
#include <stdlib.h>

int* rezerwacja()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%p",rezerwacja());
    return 0;
}
