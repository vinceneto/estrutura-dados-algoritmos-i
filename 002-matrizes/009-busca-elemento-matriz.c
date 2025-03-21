#include <stdio.h>

int main()
{
    int linhas = 2, colunas = 2;
    int matriz[2][2] = {{10, 20}, {30, 40}};
    int N;
    int encontrado = 0;

    printf("Digite um valor a ser encontrado: ");
    scanf("%d", &N);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(matriz[i][j] == N) encontrado = 1;
        }
    }

    if(encontrado) printf("O valor foi encontrado.\n");
    else printf("O valor nao foi encontrado.\n");

    return 0;
}