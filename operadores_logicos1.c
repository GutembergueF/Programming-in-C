#include <stdio.h>
#include <stdlib.h>
int main (void)
{
   /* Operador E (&&): o resultado � apenas 1 se ambas as
   express�es tamb�m forem 1, do contr�rio, o resultado � 0.
    */

    int r,x=5,y=3;
    r=(x>2)&&(y<x);
    printf("Resultado = %d \n", r);

    r=(x%2==0)&&(y>0);
    printf("Resultado= %d\n",r);


    system("pause");
    return 0;
}
