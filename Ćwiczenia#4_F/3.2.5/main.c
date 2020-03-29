#include <stdio.h>
#include <stdlib.h>

int dodaj(int*a, int*b)
{
    return *a + *b;
}

int main()
{
    int a,b;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    printf("Wynik: %d",dodaj(&a,&b));
    return 0;
}
