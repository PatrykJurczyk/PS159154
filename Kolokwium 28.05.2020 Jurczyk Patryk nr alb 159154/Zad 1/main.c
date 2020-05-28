#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="Geografia";
    char * w= wyraz;  // w = 0x60feed   , * w= 'G'
    int q = sizeof(char); // q=1
    w = wyraz+3; // w= 0x60fef0   , * w='g'
    char t = *wyraz+1; //t='H'    , &t=0x60fef7
    t = *(wyraz+2)-20;   //t='['    , &t=0x60fef7
    w =&(*(wyraz+4))-2; // w= 0x60feef  , * w='o'
    *w=(wyraz+5)[-3]; // w= 0x60feef   , *w='o'
    return 0;
}
