#include <stdio.h>
int main()
{/*Operador ternário (?):
    é tipicamente utilizado para fazer
    atribuições condicionais

    Forma geral:
    variável = condição?expressão1:expressão2
    */
  int x,y,z;
  printf("Digite x: ");
  scanf("%d",&x);
  printf("Digite y: ");
  scanf("%d",&y);

  z=x>y?x:y;
  printf("Maior = %d\n",z);

    system("pause");
    return 0;
}
