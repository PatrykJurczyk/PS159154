#include <stdio.h>
#include <stdlib.h>

void foo(int const *a, int *b)
{
    *b=*a;
}

int main()
{
    int x,z;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&x);
    printf("Podaj druga liczbe: ");
    scanf("%d",&z);
    foo(&x,&z);
    printf("Pierwsza liczba: %d\n",x);
    printf("Druga liczba: %d",z);
    return 0;
}
