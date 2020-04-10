#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned n, int tab[])
{
    for(int i=n-1; i>=0; i--)
    {
        printf("%d",tab[i]);
    }

}

int main()
{
    int x=6, tablica[] = {2,3,1,5,3,6};
    printf("Tablica od tyly to: ");
    foo(x,tablica);
    return 0;
}
