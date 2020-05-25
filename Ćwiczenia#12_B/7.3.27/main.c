#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};


struct element *minimum(struct element *Lista)
{
    struct element * min = NULL, *pom;
    if((Lista==NULL)||(Lista->next==NULL))
    {
        return NULL;
    }
    else
    {
        pom = Lista;
    }
    while(pom->next!=NULL)
    {
        if(((min=NULL)&&(pom->next->i<Lista->i))||((min!=NULL)&&(pom->next->i<min->next->i)))
        {
            min = pom;
        }
        else
        {
            pom = pom->next;
        }
    }
    return min;
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
    minimum(lista);
    return 0;
}
