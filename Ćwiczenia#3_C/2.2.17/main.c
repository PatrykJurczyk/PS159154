#include <stdio.h>
#include <stdlib.h>

void wypisz()
{
    static unsigned int liczba = 0;
    liczba ++;
    printf("Wywolano : %d",liczba);
}

int main()
{
    wypisz();
    printf("\n");
    wypisz();
    printf("\n");
    wypisz();
    printf("\n");
    wypisz();
    return 0;
}
