#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

void usunw2(struct element* Lista, struct element *elem)
{
    struct element *wsk = elem->next;
    elem->next = wsk->next;
    free(wsk);
}

int main()
{
    struct element *Lista = malloc(sizeof(struct element));
    struct element *elem = malloc(sizeof(struct element));
    elem -> next = malloc(sizeof(struct element));
    elem -> next -> i=6;
    elem -> next -> next = NULL;
    Lista -> next = malloc(sizeof(struct element));
    Lista -> next -> i=6;
    Lista -> next -> next = malloc(sizeof(struct element));
    Lista -> next -> next -> i=1;
    Lista -> next -> next -> next = NULL;
    usunw2(Lista,elem);
    return 0;
}
