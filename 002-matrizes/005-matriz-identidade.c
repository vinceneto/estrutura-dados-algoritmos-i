#include <stdio.h>

int main()
{
    int N;
    int i, j;
    
    printf("Digite a ordem da matriz identidade: ");
    scanf("%d", &N);
    
    int matriz[N][N];
    
    //Preenchendo a matriz
    for(i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
        
    }

    // Exibindo a matriz identidade
    printf("Matriz Identidade %dx%d:\n", N, N);
    for(i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}