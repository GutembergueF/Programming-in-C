#include <stdio.h>

int main ()
{
    int fatorial=5;
    int resposta=1;

    for (;fatorial>=1;--fatorial){
        resposta=resposta*fatorial;
    }
   printf("o numero fatorial eh %i\n", resposta);

    return 0;
}
