#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int unsigned n, int unsigned m)
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
}

int main()
{
    int n = 3;
    int m = 3;
    int **t = malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        *(t+i) = malloc(sizeof(int*)*m);
    }
    *(*(t+0)+0) = 1;
    *(*(t+0)+1) = 2;
    *(*(t+0)+2) = 3;
    *(*(t+1)+0) = 4;
    *(*(t+1)+1) = 5;
    *(*(t+1)+2) = 6;
    *(*(t+2)+0) = 7;
    *(*(t+2)+1) = 8;
    *(*(t+2)+2) = 9;
    printf("Przed\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d] [%d] %d ",i,j,t[i][j]);
            printf("\n");
        }

    }
    printf("Po\n");
    foo(t,n,m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d] [%d] %d ",i,j,t[i][j]);
            printf("\n");
        }

    }
    return 0;
}
