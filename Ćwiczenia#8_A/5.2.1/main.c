#include <stdio.h>
#include <stdlib.h>

void wyczysc(char napis[])
{
    napis[0] = 0;
}

void wyczysc1(wchar_t napis[])
{
    napis[0] = 0;
}

int main()
{
    char wyraz[] = "abc";
    wyczysc(wyraz);
    printf("%s",wyraz);
    wchar_t wyraz1[] = L"abds";
    wyczysc1(wyraz1);
    wprintf(L"%s",wyraz1);
    return 0;
}
