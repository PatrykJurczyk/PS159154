#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m,k;
    printf("Podaj dwie liczby calkowite dodatnie\n");
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    for(int i=m; i<=k; i+=n)
    {
        printf("%d\n", i);
    }

    return 0;
}
