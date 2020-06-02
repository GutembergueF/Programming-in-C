#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
   /*
   problema:leia a nota de 5 estudantas e imprima as notas maiores do que
   a média da turma.

   Forma geral:
   tipo nome_do_array[tamanho];
   */

   //para guardar as notas de 100 alunos:
   //float notas[100]

   /* O tamanho de um array deve ser sempre um valor ou expressão
   inteira e constante*/

   float notas[N], media=0.0;
   int i;
   for (i=0;i<N;i++){
    printf("Digite a nota do aluno %d: ",i);
    scanf("%f",&notas[i]);
    media=media+notas[i];
   }
   media=media/N;
   for(i=0;i<N;i++){
    if(notas[i]>media)
        printf("aluno %d: %f\n",i,notas[i]);
   }
    system("pause");
    return 0;
}
