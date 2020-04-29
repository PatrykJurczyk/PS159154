#include <stdio.h>
#include <stdlib.h>

char *godzina(int unsigned godz, int unsigned min, int unsigned sec)
{
    char *wyn = malloc(9*sizeof(char));
    sprintf(wyn,"%02d:%02d:%02d",godz,min,sec);
    return wyn;
}

wchar_t *godzina1(int unsigned godz, int unsigned min, int unsigned sec)
{
    wchar_t *wyn = malloc(9*sizeof(wchar_t));
    swprintf(wyn,L"%02d:%02d:%02d",godz,min,sec);
    return wyn;
}


int main()
{
    int g=10,m=23,s=54;
    printf("%s\n",godzina(g,m,s));
    wprintf(L"%s",godzina1(g,m,s));
    return 0;
}
