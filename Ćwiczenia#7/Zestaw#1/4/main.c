#include <stdio.h>
#include <stdlib.h>

double zmienna(double *x)
{
     double z = *x;
     z = 1.0/z;
     return z;


}

int main()
{
    double x;
    printf("Podaj liczbe calkowita: ");
    scanf("%lf",&x);
    printf("Wynik jest rowny %0.2lf",zmienna(&x));
    return 0;
}
