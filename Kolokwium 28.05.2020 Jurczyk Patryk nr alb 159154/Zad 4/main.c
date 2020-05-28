#include <stdio.h>
#include <stdlib.h>

struct Samochod
{
    char marka[30];
    int cena;
};

struct Samochod min(struct Samochod tab[], int n)
{
    int cena_p = tab[0].cena;
    struct Samochod wynik_sam = tab[0];
    for(int i=0; i<n; i++)
    {
        struct Samochod c = tab[i];
        int cena_a = c.cena;
        if(cena_a < cena_p)
        {
            cena_p = cena_a;
            wynik_sam = c;
        }
    }
    return wynik_sam;
};

int main()
{
    struct Samochod sam[3];
    int n = 3;
    struct Samochod s1;
    s1.cena = 34540;
    strcpy(s1.marka, "Ford");
    sam[0] = s1;

    struct Samochod s2;
    s2.cena = 54129;
    strcpy(s2.marka, "Toyota");
    sam[1] = s2;

    struct Samochod s3;
    s3.cena = 35123;
    strcpy(s3.marka, "Karol");
    sam[2] = s3;

    struct Samochod rezultat = min(sam, n);
    printf("Marka: %s\n", rezultat.marka);
    printf("Cena: %d\n", rezultat.cena);
    return 0;
}
