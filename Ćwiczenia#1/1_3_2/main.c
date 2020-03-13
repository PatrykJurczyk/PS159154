#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d",&a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d",&b);
    if (a>b)
        printf("Pierwsza liczba jest wieksza: %d",a);
    else
        if(b>a)
        printf("Druga liczba jest wieksza %d",b);
    else
        if(a=b)
        printf("Obie liczby sa takie same %d",b);


    return 0;
}
