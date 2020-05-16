#include <stdio.h>
#include <stdlib.h>

struct Trojkat{
    float a;
    float b;
    float c;
};

float obwod(struct Trojkat p)
{
    float wynik = p.a +p.b +p.c;
    return wynik;
}

int main()
{
    struct Trojkat p1;
    p1.a = 2.3;
    p1.b = 5.2;
    p1.c = 6.1;
    printf("Obwod jest rowny: %0.1f",obwod(p1));
    return 0;
}
