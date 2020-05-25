#include <stdio.h>
#include <stdlib.h>

struct trojka
{
    int unsigned a, b, c;
    struct trojka *next;
};

int tr(struct trojka *element)
{
    if(element->a*element->a + element->b*element->b == element->c*element->c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct trojka *pitagoras(struct trojka *Lista)
{
    struct trojka *pom;
    while(Lista -> next!=NULL)
    {
        if((tr(Lista->next))==1)
        {
            Lista = Lista -> next;
        }
        else
        {
            pom = Lista->next;
            Lista->next = pom->next;
            free(pom);
        }
    }
}


int main()
{
    struct trojka *lista = malloc(sizeof(struct trojka));
    lista->next = malloc(sizeof(struct trojka));
    lista->next->a=3;
    lista->next->b=4;
    lista->next->c=5;
    lista->next->next = malloc(sizeof(struct trojka));
    lista->next->next->a=9;
    lista->next->next->b=1;
    lista->next->next->c=7;
    lista->next->next->next=NULL;
    pitagoras(lista);
    return 0;
}
