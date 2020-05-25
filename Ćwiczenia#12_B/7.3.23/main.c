#include <stdio.h>
#include <stdlib.h>
//Bez G³owy

struct trojka
{
    int unsigned a, b, c;
    struct trojka *next;
};

int foo(struct trojka *element)
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
    struct trojka *pom, *pom1;
    while((Lista!=NULL)&&(foo(Lista))==0)
    {
        pom = Lista;
        Lista = Lista->next;
        free(pom);
    }
    if(Lista==NULL)
    {
        return NULL;
    }
    pom=Lista;
    while(pom->next!=NULL)
    {
        if(foo(pom->next)==1)
        {
            pom = pom->next;
        }
        else
        {
            pom1 = pom->next;
            pom->next = pom1->next;
            free(pom1);
        }
    }
    return Lista;
}
int main()
{
    struct trojka *lista = malloc(sizeof(struct trojka));
    lista->a=3;
    lista->b=4;
    lista->c=5;
    lista->next = malloc(sizeof(struct trojka));
    lista ->next->a=4;
    lista ->next->b=6;
    lista ->next->c=5;
    lista->next->next = malloc(sizeof(struct trojka));
    lista->next->next->a=9;
    lista->next->next->b=4;
    lista->next->next->c=2;
    lista->next->next->next=NULL;
    pitagoras(lista);
    return 0;
}
