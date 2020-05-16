#include <stdio.h>
#include <stdlib.h>

struct Punkt10
{
    float tab[10];
};

void Przepisz10(struct Punkt10 tab[], struct Punkt10 tab1[], int n)
{
    for(int i=0; i<n; i++)
    {
        tab1[i] = tab[i];
    }
}

int main()
{
    struct Punkt10 t[] = {{5.4,4,6,2,3,6.3,7,9,8.6,0},{5.4,6.3,7,9,8.6,0,6.4,9.0,5,7},{5.4,6.3,7,9,8.6,1.2,3.2,7,4,0.2}};
    struct Punkt10 t1[] = {{1.4,2.3,5.4,6.3,7,9,8.6,0,6.4,3.6},{4.4,5.4,6.0,5.4,6.3,7,9,8.6,0,6.4},{5.4,6.3,7,9,8.6,0,6.4,7.2,8.2,9.2}};
    Przepisz10(t,t1,3);
    return 0;
}
