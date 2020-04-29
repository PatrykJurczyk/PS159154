#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int wynik = 0;
    while(napis[wynik] != 0)
    {
        wynik++;
    }
    return wynik;
}

int dlugosc1(wchar_t napis[])
{
    int wynik = 0;
    for(wynik=0; napis[wynik] != 0; wynik++)
    {

    }
    return wynik;
}

int main()
{
    char wyraz[] = "Patryk";
    printf("Dlugosc jest rowna: %d\n",dlugosc(wyraz));
    wchar_t wyraz1[] = L"Patryk Jurczyk";
    wprintf(L"Dlugosc jest rowna: %d",dlugosc1(wyraz1));
    return 0;
}
