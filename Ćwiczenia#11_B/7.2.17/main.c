#include <stdio.h>
#include <stdlib.h>

enum Plec
{
    mezczyzna,
    kobieta
};

enum mezczyzna
{
    wolny,
    zonaty
};

enum kobieta
{
    wolna,
    mezatka
};

union czlowiek
{
    enum mezczyzna m;
    enum kobieta k;
};

struct dane_osobowe
{
    char imie[30];
    char nazwisko[45];
    enum Plec plec;
    union czlowiek stan_cywilny;
} ;

void wczytaj(struct dane_osobowe tab[], int n)
{
    int w;
    int x=0;
    for(int i=0; i<n; i++)
    {
        while(x == 0)
        {
            printf("Jezeli chcesz wczytac dane kobiety wybierz [1]\n");
            printf("Jezeli chcesz wczytac dane mezczyzny wybierz [2]\n");
            scanf("%d",&w);
            if (w == 1)
            {
                tab[i].plec=kobieta;
                break;
            }
            if (w == 2)
            {
                tab[i].plec=mezczyzna;
                break;
            }
            else
            {
                printf("Podales zly numer sprobuj jeszcze raz!!!\n");
            }
        }

        printf("Podaj Imie: ");
        scanf("%s",tab[i].imie);
        printf("Podaj Nazwisko: ");
        scanf("%s",tab[i].nazwisko);
        printf("Podaj stan cywilny: ");
        if(tab[i].plec == kobieta)
        {
            printf("wolna = 0, mezatka = 1:\n");
        }
        else
        {
            printf("wolny = 0, zonaty = 1:\n");
        }
        scanf("%d",&tab[i].stan_cywilny.k);
    }
}

int main()
{
    struct dane_osobowe p;
    wczytaj(&p,2);
    return 0;
}
