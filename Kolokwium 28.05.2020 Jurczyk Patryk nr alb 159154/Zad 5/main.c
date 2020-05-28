#include <stdio.h>
#include <stdlib.h>

struct element
{
    float t;
    struct element * next;
};

struct element *foo(struct element *lista)
{
    struct element *wsk1 = lista ->next;
    struct element *temp = NULL;
    while(wsk1 != NULL)
    {
        if(wsk1->t < 0)
        {
            temp = &wsk1;
        }
    }
    return temp;
};

int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->t=3.6;
    lista1->next = malloc(sizeof(struct element));
    lista1 ->next->t=2.8;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->t=-1.0;
    lista1->next->next->next=NULL;
    printf("%p",foo(&lista1));
    return 0;
}
