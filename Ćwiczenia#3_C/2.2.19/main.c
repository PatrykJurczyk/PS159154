#include <stdio.h>
#include <stdlib.h>

void wypisz()
{
    static int x,suma = 0;
    printf("Podaj liczbe: ");
    scanf("%d",&x);
    suma += x;
    printf("Suma jest rowna: %d\n",suma);
    return suma;
}
int main()
{
    wypisz();
    wypisz();
    wypisz();
    wypisz();
    wypisz();
    wypisz();
    wypisz();
    wypisz();
    return 0;
}
