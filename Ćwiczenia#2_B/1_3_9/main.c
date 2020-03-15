#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    float x , y, wynik;

    printf("1.Dodawanie.\n");
    printf("2.Odejmowanie.\n");
    printf("3.Mnozenie.\n");
    printf("4.Dzielenie.\n");
    printf("5.Potegowanie.\n");
    printf("Ktore dzialanie chcesz wykonac? \n");
    scanf("%d", &a);
    while ((a != 1) || (a != 2) || (a != 3) || (a != 4) || (a != 5))
    {
        if(a == 1)
            {
                printf("Podaj dwie liczby: \n");
                printf("Pierwsza: ");
                scanf("%f", &x);
                printf("Druga: ");
                scanf("%f", &y);
                wynik = x + y;
                printf("Wynik dodawania jest rowny: %0.2f",wynik);
                break;
            }
        if(a == 2)
        {
                printf("Podaj dwie liczby: \n");
                printf("Pierwsza: ");
                scanf("%f", &x);
                printf("Druga: ");
                scanf("%f", &y);
                wynik = x - y;
                printf("Wynik odejmowania jest rowny: %0.2f",wynik);
                break;
        }
        if(a == 3)
        {
                printf("Podaj dwie liczby: \n");
                printf("Pierwsza: ");
                scanf("%f", &x);
                printf("Druga: ");
                scanf("%f", &y);
                wynik = x * y;
                printf("Wynik mnozenia jest rowny: %0.2f",wynik);
                break;
        }
        if(a == 4)
        {
                printf("Podaj dwie liczby: \n");
                printf("Pierwsza: ");
                scanf("%f", &x);
                printf("Druga: ");
                scanf("%f", &y);
                wynik = x / y;
                printf("Wynik dzielenia jest rowny: %0.2f",wynik);
                break;
        }
        if(a == 5)
        {
                printf("Podaj dwie liczby: \n");
                printf("Pierwsza: ");
                scanf("%f", &x);
                printf("Druga: ");
                scanf("%f", &y);
                wynik = pow(x,y);
                printf("wynik dodawania jest rowny: %0.2f",wynik);
                break;
        }
        if((a != 1) && (a != 2) && (a != 3) && (a != 4) && (a != 5))
        {
            printf("Podales zla liczbe podaj jeszcze raz z zakresu 1-5: ");
            scanf("%d", &a);
        }
    }
    return 0;
}
