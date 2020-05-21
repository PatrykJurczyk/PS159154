#include <stdio.h>
#include <stdlib.h>

enum czworokat
{
    kwadrat,
    prostokat,
    romb,
    rownoleglobok,
    trapez
};

int main()
{
    enum czworokat x = prostokat;
    printf("%i\n",x);
    return 0;
}
