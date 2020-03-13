#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("Podaj liczbe wynierna: \n");
    scanf("%f", &x);
    printf("Wartosc bezwzgledna z %f to %f\n", x, fabs(x));
    return 0;
}
