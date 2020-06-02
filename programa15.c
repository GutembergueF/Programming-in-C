#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b,c;
    float x,x1,x2,delta;

    printf("Digite os coeficientes de uma funcao do segundo grau.\n");
    scanf("%i %i %i",&a,&b,&c);

    delta=b*b-4*a*c;

    if(a==0)
    {
    printf("Nao eh equacao do segundo grau.\n");
    }else{
    if (delta<0)
    {
        printf("Nao existe raiz real.\n");
    }else{
        if(delta==0){
            x=-b/2*a;
            printf("Existe apenas uma raiz: %f.\n",x);
        }else{
        if (a>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
           printf("A raiz eh: x1= %f e x2= %f.\n",x1,x2);

        }
        }

    }
    }


    system ("pause");
    return 0;
}
