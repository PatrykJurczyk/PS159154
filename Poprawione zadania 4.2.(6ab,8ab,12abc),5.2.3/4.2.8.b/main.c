#include <stdio.h>
#include <stdlib.h>

void foo(int unsigned x, int *tab1, int *tab2, double *tab3)
{
    int z=0,q=0,w=0;
    for(int i=0; i<(2*x); i++)
    {
        if(z%2 == 0)
        {
            printf("%0.0lf",tab3[i] = (double)tab1[q]);
            q++;
        }
        else
        {
            printf("%0.0lf",tab3[i] = (double)tab2[w]);
            w++;
        }
        z++;
    }
}

int main()
{
    int x=4, tablica1[] = {9,2,6,3}, tablica2[] = {5,3,7,2};
    double tablica3[8];
    foo(x,tablica1,tablica2,tablica3);
    printf("Tablica 1:\n");
    for(int i = 0; i < 4; i++){
        printf("[%d] %d\n", i, tablica1[i]);
    }
    printf("Tablica 2:\n");
    for(int i = 0; i < 4; i++){
        printf("[%d] %d\n", i, tablica2[i]);
    }
    printf("Tablica 3:\n");
    for(int i = 0; i < 8; i++){
        printf("[%d] %0.0lf\n", i, tablica3[i]);
    }
    return 0;
}
