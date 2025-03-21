#include <stdio.h>

int main()
{
    char texto[30] = "Hello World\n";
    printf("%s", texto);
    fputs(texto, stdout);

    return 0;
}