#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};


struct element *odwroc(struct element *Lista)
{
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
    lista->i=3;
    lista->next = malloc(sizeof(struct element));
    lista ->next->i=5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i=9;
    lista->next->next->next=NULL;
    odwroc(lista);
    return 0;
}
