// Crie um programa que declare um vetor de inteiros com 10 posições e preencha o vetor 
// com os números pares de 2 a 20. Em seguida, imprima o vetor.

#include <stdio.h>

int main()
{
    int vetor_numeros_pares[10];
    int n = 0;

    // Preenchendo o vetor
    for(int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0 && i != 0 )
        {
            vetor_numeros_pares[n] = i;
            n++;
        }
    }

    // Imprimindo o vetor
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %d do vetor: %d\n", i, vetor_numeros_pares[i]);
    }   
    
    return 0;
}