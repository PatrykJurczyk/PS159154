#include <stdio.h>
#include <stdlib.h>

int **pierwsza_tablica(int unsigned n, int unsigned m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i =0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int **first_table = pierwsza_tablica(1,2);
    return 0;
}
