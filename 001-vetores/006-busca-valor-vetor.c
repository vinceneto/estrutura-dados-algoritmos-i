/*
Busca em Vetor
Implemente um programa que leia um vetor de 6 elementos inteiros e um número inteiro 
que o usuário deseja buscar. O programa deve verificar se o número está presente no 
vetor e exibir a posição onde ele foi encontrado, ou uma mensagem dizendo que o número 
não foi encontrado.
*/

#include <stdio.h>
#define TAM 6

int main() 
{
    int vetor[TAM];
    int elemento;
    int indice = -1; // Inicia com -1, significa que o elemento não foi encontrado

    printf("> Preencha o Vetor:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("> vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n> Insira o valor que deseja buscar: ");
    scanf("%d", &elemento);

    // Buscando o elemento no vetor
    for (int i = 0; i < TAM; i++) 
    {
        if (vetor[i] == elemento) 
        {
            indice = i; // Guarda o índice do elemento
            break;
        }
    }
    
    if (indice != -1) printf("\n> Elemento encontrado no índice %d.\n", indice);
    else printf("\n> Elemento não encontrado.\n");

    return 0;
}