#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    //Preenchendo a matriz
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Digite um valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Exibindo a matriz
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}