#include <stdio.h>
#include <stdlib.h>

int ***pierwsza_tablica(int unsigned n, int unsigned m, int unsigned k)
{
    int ***tab=malloc(n*sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(int));
        //**tab = malloc(m*sizeof(int*));
        for(int j=0; j<m; j++)
        {
            *(*(tab+i)+j) = malloc(k*sizeof(int));
            //***tab = malloc(k*sizeof(int**));
        }
    }
    return tab;
}

int ***druga_tablica(int unsigned n, int unsigned m, int unsigned k)
{
    int ***tab1=malloc(n*sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab1+i) = malloc(m*sizeof(int));
        //**tab = malloc(m*sizeof(int*));
        for(int j=0; j<m; j++)
        {
            *(*(tab1+i)+j) = malloc(k*sizeof(int));
            //***tab = malloc(k*sizeof(int**));
        }
    }
    return tab1;
}

void foo(int ***tab1, int unsigned n, int unsigned m, int unsigned k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            free(*(*(tab1+i)+j));
        }
        free(*(tab1+i));
    }
    free(tab1);
}

int main()
{
    int *** t = pierwsza_tablica(2,3,4);
    int *** te = druga_tablica(2,3,4);
    foo(t,2,3,4);
    foo(te,2,3,4);

    return 0;
}
