#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float a, b, c, d, e, f, g, h, x1, x2;
    printf("Podaj trzy liczy: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    a == b;
    b == c;
    c == d;
    g = b-c;
    printf("Liczba c = %0.1f\n",g);
    f = pow(a,2) - 4*5*g;
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
        x1 = (-a-h)/2*5;
        x2 = (-a+h)/2*5;
        printf("x1 %0.1f\n",x1);
        printf("x2 %0.1f\n",x2);

        if(x1>=0)
        {
            if(x2>=0)
            {
                if(x1>x2)
                {
                    printf("Rozwiazaniem jest x = %0.1f\n", x1);
                }
                else
                {
                    printf("Rozwiazaniem jest x = %0.1f\n", x2);
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
