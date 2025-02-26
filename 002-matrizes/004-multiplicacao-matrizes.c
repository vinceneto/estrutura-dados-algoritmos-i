#include <stdio.h>

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2] = {0};
    int i, j, k;

    //Multiplicação de matrizes 2x2
    for(i =0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    //Exibir a matriz resultante
    printf("Resultado da multiplicacao:\n");
    for(i = 0; i <  2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }



    return 0;
}