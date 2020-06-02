#include <stdio.h>

//Ciclos dentro de outro ciclo

int main(void)
{
   for(int i =1;i<=10;++i){
    printf("**volta %i**\n",i);

   for(int j=1;j<=10;++j){
    printf("ponto%i\n",j);
   }
   printf("\n");
   }

    return ;
}
