#include <stdio.h>

int main()
{
    int linhas = 2, colunas = 2;
    int matriz[2][2] = {{1, 2}, {3, 4}};
    int escalar;
    int i, j;

    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);

    printf("\nMatriz Original:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Multiplicada por %d:\n", escalar);
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j] * escalar);
        }
        printf("\n");
    }
    
    return 0;
}