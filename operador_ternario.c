#include <stdio.h>
int main()
{/*Operador tern�rio (?):
    � tipicamente utilizado para fazer
    atribui��es condicionais

    Forma geral:
    vari�vel = condi��o?express�o1:express�o2
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
