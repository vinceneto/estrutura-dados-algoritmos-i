#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int *p = &vet[0];
    int i;

    // for(i = 0; i < 5; i++)
    // {
    //     printf("%d\n", p[i]);
    // }
    
    // for(i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *(p+1));
    // }
    return 0;
}