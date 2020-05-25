#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

void wyczysc(struct element* lista)
{
    struct element *wsk=lista;
    while(lista!=NULL)
    {
        lista=lista->next;
        free(wsk);
        wsk=lista;
    }
}

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i=6;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i=9;
    lista->next->next->next=NULL;
    wyczysc(lista);
    return 0;
}
