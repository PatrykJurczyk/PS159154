#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char imie[15];
    char nazwisko[40];
    char adres[70];
    char pesel[12];
    char kiernek[25];
    char num_alb[7];
};

void foo(struct Student *p)
{
    printf("Podaj imie: ");
    scanf("%s",&p->imie);
    printf("Podaj nazwisko: ");
    scanf("%s",&p->nazwisko);
    printf("Podaj adres: ");
    scanf("%s",&p->adres);
    printf("Podaj pesel: ");
    scanf("%s",&p->pesel);
    printf("Podaj kierunek: ");
    scanf("%s",&p->kiernek);
    printf("Podaj Numer Albumu: ");
    scanf("%s",&p->num_alb);
}

int main()
{
    struct Student p;
    foo(&p);
    return 0;
}
