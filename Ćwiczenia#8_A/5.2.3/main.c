#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int wynik = 0;
    for(wynik = 0; napis[wynik] != 0; wynik++)
    {

    }
    return wynik;
}

int porownaj(char nap[], char nap1[])
{
    if(dlugosc(nap) == dlugosc(nap1))
    {
        return 1;
    }
    return 0;
}

int dlugosc1(wchar_t napis[])
{
    int wynik = 0;
    for(wynik = 0; napis[wynik] != 0; wynik++)
    {

    }
    return wynik;
}

int porownaj1(wchar_t nap[], wchar_t nap1[])
{
    if(dlugosc1(nap) == dlugosc1(nap1))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char wyraz[] = "Patryk";
    char wyraz1[] = "Kyrtap";
    wchar_t wyraz2[] = L"Patryk";
    wchar_t wyraz3[] = L"Kyrtap";
    printf("%d\n",porownaj(wyraz,wyraz1));
    wprintf(L"%d",porownaj1(wyraz2,wyraz3));
    return 0;
}
