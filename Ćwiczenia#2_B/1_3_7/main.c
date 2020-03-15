#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, x1 , x2 ,d ,q ,p, a , b , c;
    printf("Podaj wspolczyniki a b c: \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    q = pow(b,2);
    d = q - 4*a*c;
    p = pow(d,0.5);
    printf("Delta jest rowna: %0.2f\n", d);
    printf("Pierwiastek z delty jest rowny %0.2f\n", p);
    if (d<0)
    {
        printf("Brak rozwiazan rownnia :( \n");
    }
    if (d == 0)
    {
        x = (-b)/2*a;
        printf("Rowananie posiada jedno rozwiazanie i jest rowne: %0.2f\n", x);
    }
    if (d > 0)
    {
        x1 = (-b + p)/2*a;
        x2 = (-b - p)/2*a;
        printf("Rownianie posiada dwa rozwiazania i sa rowne: \n");
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n", x2);
    }

    return 0;
}
