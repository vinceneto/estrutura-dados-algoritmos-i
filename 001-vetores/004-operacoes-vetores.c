#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vetor1[TAMANHO] = {10, 20, 30, 40, 50};
    int vetor2[TAMANHO] = {1, 3, 5, 7, 9};
    int resultado[TAMANHO];
    int i, j;

    for (i = 0; i < TAMANHO; i++)
    {
        // resultado[i] = vetor1[i] + vetor2[i];
        // resultado[i] = vetor1[i] - vetor2[i];
        // resultado[i] = vetor1[i] * vetor2[i];
        resultado[i] = vetor1[i] / vetor2[i];
    }

    for (j = 0; j < TAMANHO; j++)
    {
        printf("%d ", resultado[j]);
    } 

    return 0;
}