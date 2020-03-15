#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Wybierz czy bedziesz podawac trzy boki jesli tak wybierz 1, czy tyko podstawe i wysokosc jesli tak wybierz 2: \n");
    int x;
    int a;
    int b;
    int c;
    float p;
    double s;
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
    return 0;
}
