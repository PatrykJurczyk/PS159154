#include <stdio.h>
#include <stdlib.h>

void foo(char napis[])
{
    printf("%s\n",napis);
}

void foo1(wchar_t napis[])
{
    wprintf(L"%s",napis);
}

int main()
{
    char nap[256];
    wchar_t nap1[256];
    scanf("%s",nap);
    foo(nap);
    wscanf(L"%s",nap1);
    foo1(nap1);
    return 0;
}
