#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

void zmiana(char nap[])
{
    for(int i=0; nap[i] != 0; i++)
    {
        if(nap[i]>='A' && nap[i] <='Z')
        {
            nap[i] -= 'A' - 'a';
        }
    }
}

void foo(char *nap)
{
    int pom = dlugosc(nap);
    zmiana(nap);
    for(int i=pom; i>0; i--)
    {
        if(nap[i] == 'a' || nap[i] == 'e' || nap[i] == 'i' || nap[i] == 'o' || nap[i] == 'u' || nap[i] == 'y')
        {
            nap[i] = 0;
            break;
        }
    }
    return nap;
}

int main()
{
    char n[20] = "Patryk";
    printf("%s\n",n);
    foo(n);
    printf("%s\n",n);
    return 0;
}
