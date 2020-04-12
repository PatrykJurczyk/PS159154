#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {4, -1, 5, 5, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=1); //b=-1
    int c = b+2; // b=-1  , c=1
    int d = (b/=-6) ^ (c-=-22); // b=0  , c= 23 , d=23
    int e = (wsk+=-1)[2]; // b=0  , c=23  , d=23  , e=5
    e = (d *= 8) + (c /= 3); // b=0  , c=7  , d=184  , e=191
    c = d - (b+=8); // b=8  , c=176  , d=184  , e=191
    b = *wsk + e; // b=195  , c=176  , d=184  , e=191
    d = b * c % e; // b=195  , c=176  , d=131  , e=191
    return 0;
}
