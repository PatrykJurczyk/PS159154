#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float a, b, c, d, e, f, g, h, x1, x2;
    printf("Podaj cztery liczy: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    e = fabs(a);
    printf("Liczba |a| jest rowna: %0.1f\n",e);
    g = c-d;
    printf("Liczba c = %0.1f\n",g);
    f = pow(b,2) - 4*e*g;
    printf("Delta = %0.1f\n",f);
    if(f < 0)
    {
        printf("Nie ma takie x ktory spelni warunek: \n");
    }
    if(f == 0)
    {
        x = -b/2*e;
        printf("Rozwiazanie jest x = %d\n", x);
    }
    if(f > 0)
    {
        h = pow(f,0.5);
        printf("Pierwiastek z delty: %0.1f\n",h);
        x1 = (-b-h)/2*e;
        x2 = (-b+h)/2*e;
        printf("x1 %0.1f\n",x1);
        printf("x2 %0.1f\n",x2);
        if(x1>=0)
        {
            if(x2>=0)
            {
                if(x1>x2)
                {
                    printf("Rozwiazaniem jest x = %0.1f\n", x2);
                }
                else
                {
                    printf("Rozwiazaniem jest x = %0.1f\n", x1);
                }
            }
            else
            {
                printf("Rozwiazaniem jest x = %0.1f\n", x1);
            }
        }
        else
        {
            if(x2>=0)
            {
                printf("Rozwiazaniem jest x = %0.1f", x2);
            }
            else
            {
                printf("Brak rozwiazania: ");
            }
        }
    }
//  e = wartosc bezwzgledna z a.
//  f = delta.
//  g = c
//  h = pierwiastek z delty.
    return 0;
}
