#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float a;
    printf("Digite a idade do nadador:\n");
    scanf("%f",&a);

    if(a>=5&&a<=7){
    printf("Categoria Infantil A.\n");
    }else{
      if(a>=8&&a<=10){
      printf("Categoria Infantil B.\n");
      }else{
        if(a>=11&&a<=13){
        printf("Categoria Juvenil A.\n");
      }else{
        if(a>=14&&a<=17){
        printf("Categoria Juvenil B.\n");
      }else{
        if(a>=18)
            printf("Categoria Senior.\n");

    }
      }
      }
    }


    system ("pause");
    return 0;
}
