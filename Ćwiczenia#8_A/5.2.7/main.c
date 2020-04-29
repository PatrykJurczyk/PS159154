#include <stdio.h>
#include <stdlib.h>

void sklej(char nap1[], char nap2[], char nap3[])
{
    int i,j;
    for(i=0; nap1[i] != 0; i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=0; nap2[j] != 0; i++,j++)
    {
        nap3[i]=nap2[j];
    }
    nap3[i]=0;
}

void sklej1(wchar_t nap1[], wchar_t nap2[], wchar_t nap3[])
{
    int i,j;
    for(i=0; nap1[i] != 0; i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=0; nap2[j] != 0; i++,j++)
    {
        nap3[i]=nap2[j];
    }
    nap3[i]=0;
}

int main()
{
    char wyraz1[] = "Patryk ";
    char wyraz2[] = "Jurczyk";
    char wyraz3[] = "jsdhdfkjghsdfkjhskdsg";
    wchar_t w1[] = L"Patryk ";
    wchar_t w2[] = L"Jurczyk";
    wchar_t w3[] = L"fdsfdsfdssfgdhjhfgdghhghfd";
    sklej(wyraz1,wyraz2,wyraz3);
    sklej1(w1,w2,w3);
    printf("%s\n",wyraz3);
    wprintf(L"%s",w3);
    return 0;
}
