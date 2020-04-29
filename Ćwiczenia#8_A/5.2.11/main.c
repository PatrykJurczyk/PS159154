#include <stdio.h>
#include <stdlib.h>

int SprZnaku(char nap[], char ch)
{
    for(int i=0; nap[i]!=0; i++)
    {
        if(nap[i]==ch)
        {
            return 1;
        }
    }
    return 0;
}

void foo(char nap[], int i)
{
    for(int k=i; nap[k]!=0; k++)
    {
        nap[k]=nap[k+1];
    }
}

void wytnijzw(char nap1[], char nap2[])
{
    for(int i=0; nap1[i]!=0;i++)
    {
        if(SprZnaku(nap2,nap1[i])==1)
        {
            foo(nap1,i);
            i--;
        }
    }
}

int isChar1(wchar_t nap[], wchar_t ch)
{
    for(int i=0; nap[i]!=0; i++)
    {
        if(nap[i]==ch)
        {
            return 1;
        }
    }
    return 0;
}

void foo1(wchar_t nap[], int i)
{
    for(int k=i; nap[k]!=0; k++)
    {
        nap[k]=nap[k+1];
    }
}

void wytnijzw1(wchar_t nap1[], wchar_t nap2[])
{
    for(int i=0; nap1[i]!=0;i++)
    {
        if(isChar1(nap2,nap1[i])==1)
        {
            foo1(nap1,i);
            i--;
        }
    }
}

int main()
{
    char slowo[] = "Patryk Jurczyk";
    char znak[] = " a";
    wchar_t slowo1[] = L"Patryk Jurczyk";
    wchar_t znak1[] = L" a";
    wytnijzw(slowo,znak);
    wytnijzw1(slowo1,znak1);
    printf("%s\n",slowo);
    wprintf(L"%s",slowo1);
    return 0;
}
