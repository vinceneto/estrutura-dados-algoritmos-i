

#include <stdio.h>

int main()
{
    //Declarado o vetor de 5 posições
    int vetor[5];
    int soma = 0; // Variável acumuladora
    int i;  //Variável de iteração
    int j;  //Variável de iteração

    // Armazenando valores no vetor
    printf("Insira 5 valores inteiros:\n");
    for(i = 0; i < 5; i++)
    {
        printf("> vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Somando os valores do vetor
    for(j = 0; j < 5; j++)
    {
        soma = soma + vetor[j];
    }

    // Imprimindo os valores dos elementos do vetor
    printf("> Soma dos elementos: %d\n", soma);

    return 0;
}