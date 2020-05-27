#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numero;

    numero = (int*)malloc(sizeof(int));

    numero = 27;

    printf("%d\n", numero);

    numero++;

    printf("%d\n", numero);

    free(numero);
    numero = NULL;

    return 0;
}
