#include <stdio.h>
#include <stdlib.h>

int foo(int **tab, int unsigned n, int unsigned m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m/2; j++)
        {
            int temp = *(*(tab+i)+j);
            *(*(tab+i)+j)=*(*(tab+i)+m-1-j);
            *(*(tab+i)+m-1-j)=temp;
        }
    }
    return tab;
}

void foo1(int **tab, int unsigned n, int unsigned m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m/2; j++)
        {
            int temp = *(*(tab+i)+j+1);
            *(*(tab+i)+j+1)=*(*(tab+i)+m-1-j);
            *(*(tab+i)+m-1-j)=temp;
        }
    }
}


int main()
{
    int n = 4;
    int m = 5;
    int **t = malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        *(t+i) = malloc(sizeof(int*)*m);
    }
    int **x = malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        *(x+i) = malloc(sizeof(int*)*m);
    }
    *(*(t+0)+0) = 1;
    *(*(t+0)+1) = 2;
    *(*(t+0)+2) = 3;
    *(*(t+0)+3) = 4;
    *(*(t+0)+4) = 5;

    *(*(t+1)+0) = 6;
    *(*(t+1)+1) = 7;
    *(*(t+1)+2) = 8;
    *(*(t+1)+3) = 9;
    *(*(t+1)+4) = 10;

    *(*(t+2)+0) = 11;
    *(*(t+2)+1) = 12;
    *(*(t+2)+2) = 13;
    *(*(t+2)+3) = 14;
    *(*(t+2)+4) = 15;

    *(*(t+3)+0) = 16;
    *(*(t+3)+1) = 17;
    *(*(t+3)+2) = 18;
    *(*(t+3)+3) = 19;
    *(*(t+3)+4) = 20;
    printf("Podstawowa: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d] [%d] %d ",i,j,t[i][j]);
            printf("\n");
        }

    }
    printf("Spelniajaca warunki zadania: \n");
    x = t;
    foo(t,n,m);
    foo1(x,n,m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d] [%d] %d ",i,j,x[i][j]);
            printf("\n");
        }
    }
    return 0;
}

