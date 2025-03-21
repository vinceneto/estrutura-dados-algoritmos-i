#include <stdio.h>

int main()
{   
    //Inicializando string
    char str1[20] = "Hello World";
    char str2[20];
    int i;

    // Copia de strings
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    // Imprimindo a string copiada
    printf("\n%s\n", str2);

    return 0;
}