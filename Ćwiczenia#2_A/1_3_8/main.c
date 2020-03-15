#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int z;
    int x;
    int a;
    int b;
    int c;
    float p;
    double s;
    printf("Ktorej figury chcesz obliczyc pole: \n");
    printf("1.Kwadrat.\n");
    printf("2.Prostokat.\n");
    printf("3.Trojkat.\n");
    scanf("%i", &z);
    while ((z != 1) || (z != 2) || (z != 3))
    {
    if (z == 1)
    {
        printf("Podaj dlugosc boku kwadratu: ");
        scanf("%d", &a);
        p = pow(a,2);
        printf("Pole kwadratu jest rowne: %0.2f\n", p);
        break;
    }
    if (z == 2)
    {
        printf("Podaj dlugosci bokow: \n");
        printf("Bok a = ");
        scanf("%d", &a);
        printf("Bok b = ");
        scanf("%d", &b);
        p = a*b;
        printf("Pole prostokata jest rowne: %0.2f\n", p);
        break;
    }
    if (z == 3)
    {
    printf("Wybierz czy bedziesz podawac trzy boki jesli tak wybierz 1, czy tyko podstawe i wysokosc jesli tak wybierz 2: \n");
    printf("1 Podaj trzy boki: \n");
    printf("2 Podaj podstawe i wysokosc: \n");
    scanf("%i", &x);

    while (x != 1 || x != 2)
    {
    if (x == 1)
    {
        printf("Podaj pierwszy bok: ");
        scanf("%d", &a);
        printf("Podaj drugi bok: ");
        scanf("%d", &b);
        printf("Podaj trzeci bok: ");
        scanf("%d", &c);
        p = (a + b + c)*0.5;
        printf("Polowa obwodu: %0.1f\n", p);
        s = pow((p*(p-a)*(p-b)*(p-c)),0.5);
        printf("Pole trojkata jest rowne: %0.2f\n", s);
        break;
    }
    if (x == 2)
    {
        printf("Podaj dlugosc podstawy: ");
        scanf("%d", &b);
        printf("Podaj dlugosc wysokosci: ");
        scanf("%d", &c);
        s = b * c * 0.5;
        printf("Pole trojkata jest rowne: %0.2f\n", s);
        break;
    }
    if ((x != 1) && (x != 2))
    {
        printf("Podales zly numer: sprobuj ponownie: ");
        printf("Podaj ponownie numer 1 lub 2: ");
        scanf("%d", &x);
    }
    }
    }
    if ((z != 1) && (z != 2) && (z != 3))
    {
        printf("Podales zly numer: sprobuj ponownie: ");
        printf("Podaj ponownie numer 1 , 2 lub 3: ");
        scanf("%d", &z);
    }
        break;
    }

return 0;
}
