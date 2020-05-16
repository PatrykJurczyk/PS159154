#include <stdio.h>
#include <stdlib.h>

struct Punkt
{
    float x,y,z;
};

void Przepisz(struct Punkt tab[], struct Punkt tab1[], int n)
{
    for(int i=0; i<n; i++)
    {
        tab1[i] = tab[i];
    }
}

int main()
{
    struct Punkt t[] = {{5.4,6.3,8.6},{5.4,6.4,9.0},{1.2,3.2,0.2}};
    struct Punkt t1[] = {{1.4,2.3,3.6},{4.4,5.4,6.0},{7.2,8.2,9.2}};
    Przepisz(t,t1,3);
    return 0;
}
