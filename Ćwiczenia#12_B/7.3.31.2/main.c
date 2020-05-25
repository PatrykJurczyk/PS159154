#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};


struct element *odwroc(struct element *Lista)
{
    Lista = Lista -> next;
    struct element * pom, *pom1;
    if((Lista==NULL)||(Lista->next==NULL))
    {
        return Lista;
    }
    else
    {
        pom=Lista->next;
        pom1=pom->next;
        Lista->next=NULL;
        pom->next=Lista;
    }
    while(pom1!=NULL)
    {
        Lista = pom;
        pom=pom1;
        pom1=pom1->next;
        pom->next=Lista;
    }
    return pom;
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
