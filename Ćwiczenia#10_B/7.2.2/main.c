#include <stdio.h>
#include <stdlib.h>

struct Trojkat
{
    float a;
    float b;
    float c;
};

void foo(struct Trojkat t, struct Trojkat *t1)
{
    *t1 = t;
}

int main()
{
    struct Trojkat p = {2.5,7.5,9.5};
    struct Trojkat p1 = {3.4,6.3,9.8};
    foo(p,&p1);
    printf("1: %f %f %f\n",p.a,p.b,p.c);
    printf("2: %f %f %f\n",p1.a,p1.b,p1.c);
    return 0;
}
