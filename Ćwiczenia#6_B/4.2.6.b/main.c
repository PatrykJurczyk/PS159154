#include <stdio.h>
#include <stdlib.h>

void wypisz(int unsigned x, int tab1[], int tab2[])
{
    for(int i=x; i>=0; i--)
    {
        printf("%d\n",tab2[i] = tab1[i]);
    }
}

int main()
{
    int n=4, tablica1[5]={1,2,3,4,5},tablica2[5]={1,2,1,2,1};
    wypisz(n,tablica1,tablica2);
    return 0;
}
