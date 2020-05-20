#include <stdio.h>
#include <stdlib.h>

int **pierwsza_tablica(int unsigned n)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i =0; i<n; i++)
    {
        *(tab+i) = malloc((i+1)*sizeof(int));
        //**tab = malloc(m*sizeof(int*));
    }
    return tab;
}

int main()
{
    int **first_table = pierwsza_tablica(5);
    return 0;
}
