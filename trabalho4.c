#include <stdio.h>

int main ()
{
    //declara��o de vari�veis:
    //vari�vel do tipo int ( guarda apenas n�meros inteiros)
    int minhaIdade = 32;

    /*outra forma:

    int minhaIdade;
    minhaIdade = 32;
    */
    int idadeAna;
    idadeAna = 32;

    int idadeGabriel = 7;

    //Como colocar o valor da vari�vel dentro da fun��o
    printf ( "minha idade  = %i.\n Idade de Ana = %i\n Idade de Gabriel = %i\n\n",minhaIdade,idadeAna,idadeGabriel);

    //multiplicando a vari�vel
    printf ( "minha idade 'e = %i.\n",minhaIdade*3);

    return 0;
}
