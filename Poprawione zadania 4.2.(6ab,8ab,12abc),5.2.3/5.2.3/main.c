#include <stdio.h>
#include <stdlib.h>

int porownaj(char napis[], char napis1[])
{
    int dlugosc1 = 0;
    int dlugosc2 = 0;
    for(dlugosc1 = 0; napis[dlugosc1] != 0; dlugosc1++)
    {

    }
    for(dlugosc2 = 0; napis1[dlugosc2] != 0; dlugosc2++)
    {

    }
    if (dlugosc1 != dlugosc2)
    {
        return 0;
    }
    for (int i=0; i<dlugosc1; i++)
    {
        if (napis[i] != napis1[i])
        {
           return 0;
        }
    }
    return 1;
}

int porownaj1(wchar_t napis[], wchar_t napis1[])
{
    int dlugosc1 = 0;
    int dlugosc2 = 0;
    for(dlugosc1 = 0; napis[dlugosc1] != 0; dlugosc1++)
    {

    }
    for(dlugosc2 = 0; napis1[dlugosc2] != 0; dlugosc2++)
    {

    }
    if (dlugosc1 != dlugosc2)
    {
        return 0;
    }
    for (int i=0; i<dlugosc1; i++)
    {
        if (napis[i] != napis1[i])
        {
           return 0;
        }
    }
    return 1;
}

int main()
{
    char wyraz[] = "Patryk";
    char wyraz1[] = "Patryk";
    wchar_t wyraz2[] = L"Patryk";
    wchar_t wyraz3[] = L"Kyrtap";
    printf("%d\n",porownaj(wyraz,wyraz1));
    wprintf(L"%d",porownaj1(wyraz2,wyraz3));
    return 0;
}
