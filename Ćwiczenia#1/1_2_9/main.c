#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Podaj liczbe nieujemna: \n");
    scanf("%d", &x);
    printf("Twoja liczba to: %f", pow((double) x, 0.5));
    return 0;
}
