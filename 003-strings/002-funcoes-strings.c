#include <stdio.h>
#include <string.h>

int main()
{
    //Função strlen()
    // char str[15] = "teste";
    // printf("Tamanho da string: %d\n\n", strlen(str));

    //Função strcpy()
    // char str1[100], str2[100];
    // printf("Entre com uma string: ");
    // fgets(str1, 100, stdin);
    // strcpy(str2, str1);
    // printf("String 1: %s\n", str1);
    // printf("String 2: %s\n", str2);

    //Função strcat
    // char str1[15] = "bom ";
    // char str2[15] = "dia";
    // strcat(str1, str2);
    // printf("%s\n", str1);

    char str1[100], str2[100];
    printf("Entre com uma string: ");
    gets(str1);
    printf("Entre com outra string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0) printf("Strings iguais\n");
    else printf("Strings diferentes.\n");

    return 0;
} 