#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};


struct trojka *minimum(struct element *Lista)
{
    struct element * min = Lista;
    while(Lista->next!=NULL)
    {
        if(Lista->next->i<min->next->i)
        {
            min = Lista;
        }
        else
        {
            Lista = Lista->next;
        }
    }
    return min;
}


int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i=3;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i=7;
    lista->next->next->next=NULL;
    return 0;
}
