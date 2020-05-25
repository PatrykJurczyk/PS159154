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
    struct element *el1 = malloc(sizeof(struct element));
    el1->i=3;
    el1->next=NULL;
    struct element *el2 = malloc(sizeof(struct element));
    el2->i=5;
    el2->next=NULL;
    el1->next=el2;
    wyczysc(el1);
    return 0;
}
