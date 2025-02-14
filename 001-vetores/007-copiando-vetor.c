/*
Cópia de Vetores
Escreva um programa que leia um vetor de 5 elementos inteiros e copie seus 
elementos para outro vetor. O programa deve exibir o vetor copiado.
*/

#include <stdio.h>
#define TAMANHO 5

int main() 
{
    int vetor_original[TAMANHO];
    int vetor_copia[TAMANHO];

    printf("> Preencha o Vetor:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor_original[i]);
    }

    // Copiando elementos do vetor1 para o vetor_copia
    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor_copia[i] = vetor_original[i];
    }

    // Imprimindo o vetor copiado
    printf("\n> Vetor Copia: { ");
    for (int i = 0; i < TAMANHO; i++) 
    {
        printf("%d ", vetor_copia[i]);
    }
    printf("}\n");

    return 0;
}