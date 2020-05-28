#include <stdio.h>
#include <stdlib.h>

int foo(float **tab, int n, int m)
{
    int wynik = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0 && (j==i || j==m-1))
            {
                wynik *= *(*(tab+i)+j);
            }
            if(i==1 && (j==i || j==m-2))
            {
                wynik *= *(*(tab+i)+j);
            }
            if(i==2 && (j==i || j==m-3))
            {
                wynik *= *(*(tab+i)+j);
            }
        }
    }
    return wynik;
}

int main()
{
    int n = 3;
    int m = 4;
    float **tab = malloc(n*sizeof(float*));
    for(int i=0; i<n; i++)
    {
        *(tab+i) = malloc(m*sizeof(float));
    }
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = -2;
    *(*(tab+0)+3) = 8;
    *(*(tab+1)+0) = -1;
    *(*(tab+1)+1) = 8;
    *(*(tab+1)+2) = -4;
    *(*(tab+1)+3) = 3;
    *(*(tab+2)+0) = 3;
    *(*(tab+2)+1) = 5;
    *(*(tab+2)+2) = -2;
    *(*(tab+2)+3) = -9;
    printf("%d",foo(tab,n,m));
    return 0;
}
