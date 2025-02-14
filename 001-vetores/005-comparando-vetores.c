#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int iguais = 1;

    //Preenchendo o vetor 1
    printf("> Preencha o vetor 1\n");
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("> vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    //Preenchendo o vetor 2
    printf("> Preencha o vetor 2\n");
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("> vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    //Comparando os vetores
    for(int i = 0; i < TAMANHO; i++)
    {
        if(vetor1[i] != vetor2[i])
        {
            iguais = 0;
            break;
        }
    }

    if(iguais) printf("> Os vetores são iguais!\n");
    else printf("> Os vetores são diferentes!\n");

    return 0;
}


