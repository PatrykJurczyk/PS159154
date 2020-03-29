#include<stdlib.h>
#include<stdio.h>
double fun(int x)
{
    return x;
}

double wywolaj(double (*fun)(int),int b)
{
    return fun(b);
}
main()
{
    int b=1,a,x;
    printf("%0.2lf",wywolaj((&fun),b));
    return 0;
}
