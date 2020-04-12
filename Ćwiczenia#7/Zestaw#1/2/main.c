#include <stdio.h>
#include <stdlib.h>

int funkcja(const int *a, const int *b)
{

    a=b;

}

int main()
{
    int x=5;
    int y=8;
    funkcja(&x,&y);
    return 0;
}
