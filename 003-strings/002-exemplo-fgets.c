#include <stdio.h>

int main()
{
    char nome[30];
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    setbuf(stdin, NULL);
    
    printf("Digite um nome: ");
    scanf("%s", nome);
    //fgets(nome, 30, stdin);

    printf("O nome digitado foi: %s\n\n", nome);

    return 0;
}