#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j;
    //Armazenando valores no vetor
    printf("Insira 10 valores inteiros:\n");
    for(i = 0; i < 10; i++)
    {
        printf("> vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //Imprimindo o vetor invertido
    printf("\n> Imprimindo o vetor invertido:\n");
    for(j = 9; j >= 0; j--)
    {
        printf("%d ", vetor[j]);
    }

    return 0;
}