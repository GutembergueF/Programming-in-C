#include <stdio.h>

int main ()
{
    //declaração de variáveis:
    //variável do tipo int ( guarda apenas números inteiros)
    int minhaIdade = 32;

    /*outra forma:

    int minhaIdade;
    minhaIdade = 32;
    */
    int idadeAna;
    idadeAna = 32;

    int idadeGabriel = 7;

    //Como colocar o valor da variável dentro da função
    printf ( "minha idade  = %i.\n Idade de Ana = %i\n Idade de Gabriel = %i\n\n",minhaIdade,idadeAna,idadeGabriel);

    //multiplicando a variável
    printf ( "minha idade 'e = %i.\n",minhaIdade*3);

    return 0;
}
