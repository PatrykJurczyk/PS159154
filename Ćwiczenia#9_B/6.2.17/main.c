#include <stdio.h>
#include <stdlib.h>

double foo(int **tab, int unsigned n, int unsigned m)
{
    int suma;
    double wynik;
    for(int i=0; i<n; i++)
    {
        suma = 0;
        for(int j=0; j<m; j++)
        {
            suma += *(*(tab+i)+j);
            if(((double)suma/m>wynik)||(i==0))
            {
                wynik = (double)suma/m;
            }
        }
    }
    return wynik;
}

int main()
{
    int n = 2;
    int m = 3;
    int **t = malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        *(t+i) = malloc(sizeof(int*)*m);
    }
    *(*(t+0)+0) = 1;
    *(*(t+0)+1) = 1;
    *(*(t+0)+2) = 1;
    *(*(t+1)+0) = 2;
    *(*(t+1)+1) = 2;
    *(*(t+1)+2) = 2;
    printf("%0.0lf\n",foo(t,n,m));
    return 0;
}
