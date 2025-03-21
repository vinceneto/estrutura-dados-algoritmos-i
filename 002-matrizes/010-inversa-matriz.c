#include <stdio.h>

int main()
{
    float matriz[2][2], inversa[2][2];
    float determinante;

    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    if (determinante == 0)
    {
        printf("\nA matriz nao possui inversa.\n");
    }
    else
    {
        printf("\nMatriz Inversa:\n");

        inversa[0][0] = matriz[1][1] / determinante;
        inversa[0][1] = -matriz[0][1] / determinante;
        inversa[1][0] = -matriz[1][0] / determinante;
        inversa[1][1] = matriz[0][0] / determinante;
    }
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%.2f  ", inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}