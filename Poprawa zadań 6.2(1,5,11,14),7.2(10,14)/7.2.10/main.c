#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int i;
    int unsigned j;
};

int main()
{
    union super_int m;
    m.i=-4;
    printf("i: %i\n",m.i);
    printf("j: %u\n",m.j);
    return 0;
}
