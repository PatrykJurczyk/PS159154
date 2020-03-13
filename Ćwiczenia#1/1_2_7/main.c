#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Podaj liczbe calkowita\n");
    scanf("%d", &x);
    printf("To jest twoja liczba wieksza o 1: \n%d", x+1);
    return 0;
}
