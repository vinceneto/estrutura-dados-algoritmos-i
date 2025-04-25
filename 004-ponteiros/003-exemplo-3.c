#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara uma variável int contendo o valor 10
    int contador = 10;
    // Declara um ponteiro para int
    int *p;
    // Atribui ao ponteiro o endereço da variavel int
    p = &contador;
    printf("Conteudo apontado por p: %d \n", *p);

    *p = 12;
    printf("Conteudo apontado por p: %d\n", *p);
    printf("Conteudo de contador: %d\n", contador);

    return 0;
}