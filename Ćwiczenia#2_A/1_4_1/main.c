#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = n; i <= m ; i += n)
    {
        printf("%d\n", i);
    }
    return 0;
}
