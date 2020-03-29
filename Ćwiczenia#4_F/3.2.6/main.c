#include <stdio.h>
#include <stdlib.h>

void zamiana(int n, int*w)
{
    *w = n;

}

int main()
{
    int a,b;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    zamiana(a,&b);
    printf("Wynik: %d\nWynik: %d",a,b);
    return 0;
}
