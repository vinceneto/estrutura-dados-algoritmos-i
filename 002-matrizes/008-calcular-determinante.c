#include <stdio.h>

int main()
{
    int matriz[2][2];
    int i, j;

    printf("Digite os elementos da matriz 2x2:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite um valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("\nDeterminante da matriz: %d\n", determinante);
    
    return 0;
}