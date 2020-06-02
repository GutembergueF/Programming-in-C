#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O comando do-while permite executar, repetidamente
    e AO MENOS UMA VEZ, um conjunto de comandos de acordo
    com uma condição.

    Forma geral:

    do{
        conjunto de comandos
    }while(condição);
    */

    int a,b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&a,&b);
    do{
        printf("%d\n",a);
        a++;
    }while(a<b);

    printf("Fim do programa.\n");
    system("pause");
    return 0;
}
