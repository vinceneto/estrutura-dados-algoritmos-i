#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAMANHO 200

int main() {
    char frase[MAX_TAMANHO];
    char menor_palavra[MAX_TAMANHO];
    char palavra_atual[MAX_TAMANHO];

    // Solicita a entrada do usuário
    printf("Digite uma frase: ");
    fgets(frase, MAX_TAMANHO, stdin);

    // Remove a quebra de linha do final (caso exista)
    int tamanho = strlen(frase);
    if (frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
    }

    // Usa strtok para dividir a frase em palavras
    char *token = strtok(frase, " ");

    // Se a frase não estiver vazia, inicializa a menor palavra com a primeira palavra encontrada
    if (token) {
        int i = 0;
        while (token[i] != '\0') { // Copia manualmente a string
            menor_palavra[i] = token[i];
            i++;
        }
        menor_palavra[i] = '\0'; // Finaliza a string corretamente
    }

    // Percorre os demais tokens (palavras)
    while (token) {
        int i = 0;
        while (token[i] != '\0') { // Copia manualmente a string
            palavra_atual[i] = token[i];
            i++;
        }
        palavra_atual[i] = '\0';

        // Comparação sem diferenciar maiúsculas e minúsculas
        int j = 0;
        while (palavra_atual[j] != '\0') {
            palavra_atual[j] = tolower(palavra_atual[j]);
            j++;
        }
        j = 0;
        while (menor_palavra[j] != '\0') {
            menor_palavra[j] = tolower(menor_palavra[j]);
            j++;
        }

        // Compara as palavras manualmente
        int resultado = 0;
        for (i = 0; palavra_atual[i] != '\0' && menor_palavra[i] != '\0'; i++) {
            if (palavra_atual[i] < menor_palavra[i]) {
                resultado = -1;
                break;
            } else if (palavra_atual[i] > menor_palavra[i]) {
                resultado = 1;
                break;
            }
        }
        if (resultado == 0 && palavra_atual[i] == '\0' && menor_palavra[i] != '\0') {
            resultado = -1;
        }

        // Atualiza a menor palavra se a atual for menor
        if (resultado < 0) {
            i = 0;
            while (token[i] != '\0') { // Copia manualmente a string
                menor_palavra[i] = token[i];
                i++;
            }
            menor_palavra[i] = '\0';
        }

        // Pega a próxima palavra
        token = strtok(NULL, " ");
    }

    // Exibe o resultado
    printf("Primeira palavra em ordem alfabetica: %s\n", menor_palavra);

    return 0;
}