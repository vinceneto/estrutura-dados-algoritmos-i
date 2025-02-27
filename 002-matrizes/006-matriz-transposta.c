#include <stdio.h>

int main()
{
    int linhas = 2, colunas = 3;
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transposta[3][2];
    int i, j;

    //Exibindo a matriz original
    printf("Matriz Original:\n");
    for (i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Calculando a transposta
    for (i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    //Exibindo a matriz transposta
    printf("\nMatriz Transposta:\n");
    for (i = 0; i < colunas; i++)
    {
        for(j = 0; j < linhas; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}