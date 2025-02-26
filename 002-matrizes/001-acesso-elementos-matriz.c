#include <stdio.h>

int main()
{
    //Inicializando uma Matriz
    int matriz[2][2] = {{1, 2}, {3, 4}};

    //Acessando os valores da matriz
    printf("Elemento [0][0]: %d\n", matriz[0][0]);
    printf("Elemento [0][1]: %d\n", matriz[0][1]);
    printf("Elemento [1][0]: %d\n", matriz[1][0]);
    printf("Elemento [1][1]: %d\n", matriz[1][1]);

    return 0;
}