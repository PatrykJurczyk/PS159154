#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj dwie dodatnie calkowite liczby: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    if ((n<0) && (m<0))
    {
        printf("Podales zle liczby! ");
    }
    else
    {
        if(n==m)
        {
            printf("NWD wynosi: %d",n);
        }
         else
        {
            do
            {
                if(n>m)
                {
                    n=n-m;
                }
                else
                {
                    m=m-n;
                }
            }
        while(n!=m);
        printf("NWD wynosi: %d",n);
        }
    }
    return 0;
}
