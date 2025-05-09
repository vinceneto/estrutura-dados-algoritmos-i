#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pp;
    float p2 = 20.0;

    // ponteiro generico recebe o endereço de um inteiro
    pp = &p2;

    // tenta acessar o conteuudo do ponteiro generico
    // printf("Conteúdo: %d\n", *pp); (ERRO)

    //converte o ponteiro generico para (int *) antes de acessar seu contedo
    printf("Conteúdo: %f\n", *(float*)pp);
    return 0;
}