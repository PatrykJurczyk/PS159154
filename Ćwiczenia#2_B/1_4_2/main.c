#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj dwie liczby calkowite dodatnie\n");
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        printf("%d\n", i*n);
    }
    return 0;
}
