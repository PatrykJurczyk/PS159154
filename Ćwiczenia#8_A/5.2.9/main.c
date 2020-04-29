#include <stdio.h>
#include <stdlib.h>

void wytnij(char nap[], int n, int m)
{
    int i, dlugosc;
    for(dlugosc=0; nap[dlugosc] != 0; dlugosc++);
    if(dlugosc+1>m)
    {
        for(i=0; i+m<dlugosc; i++)
        {
            nap[n+i] = nap[i+m+1];
        }
    }
    else
    {
        if((n<dlugosc) && (dlugosc+1<=m))
        {
            nap[n] = 0;
        }
    }
    return nap;
}

void wytnij1(wchar_t nap[], int n, int m)
{
    int i, dlugosc;
    for(dlugosc=0; nap[dlugosc] != 0; dlugosc++);
    if(dlugosc+1>m)
    {
        for(i=0; i+m<dlugosc; i++)
        {
            nap[n+i] = nap[i+m+1];
        }
    }
    else
    {
        if((n<dlugosc) && (dlugosc+1<=m))
        {
            nap[n] = 0;
        }
    }
    return nap;
}

int main()
{
    char w1[] = "Patryk Jurczyk";
    int n=5,m=10;
    wytnij(w1,n,m);
    printf("%s\n",w1);
    wchar_t w2[] = L"Patryk Jurczyk";
    wytnij1(w2,n,m);
    wprintf(L"%s",w2);
    return 0;
}
