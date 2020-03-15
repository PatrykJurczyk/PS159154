#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1,a2,b1,b2,c1,c2,wx,wy,w,x,y;
    printf("Podaj a1: \n");
    scanf("%f", &a1);
    printf("Podaj b1: \n");
    scanf("%f", &b1);
    printf("Podaj c1: \n");
    scanf("%f", &c1);
    printf("Podaj a2: \n");
    scanf("%f", &a2);
    printf("Podaj b2: \n");
    scanf("%f", &b2);
    printf("Podaj c2: \n");
    scanf("%f", &c2);

    w = a1*b2 - b1*a2; //wyznacznik g³ówny
	wx = c1*b2 - b1*c2;
	wy = a1*c2 - c1*a2;

	if(w!=0) //sprawdzamy, czy g³ówny wyznacznik jest ró¿ny od zera
	{
	    x = wx/w;
	    y = wy/w;
		printf("x = %f\n", x);
		printf("y = %f\n", y);
	}
	else
    {
	if((wx==0) && (wy==0))
    {
        printf("Uklad ma nieskonczenie wiele rozwiazan \n");
    }
    else
    {
        printf("Uklad sprzeczny \n");
    }
    }
    return 0;
}
