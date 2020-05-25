#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *znajdz(struct element *Lista, int a)
{
    while((Lista!=NULL)&&(Lista->i!=a))
    {
        Lista = Lista->next;
    }
    return Lista;
};

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista -> i=5;
    lista->next = malloc(sizeof(struct element));
    lista ->next->i=2;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i=9;
    lista->next->next->next=NULL;
    znajdz(lista,7);
    return 0;
}
