#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    float wynik;
    printf("Podaj trzy liczby calkowite\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    wynik = (float)(x+y+z)/3;
    printf("Twoja srenia to: %f", wynik);

    return 0;
}
