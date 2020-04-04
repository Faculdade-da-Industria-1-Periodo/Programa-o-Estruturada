#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, *ptr;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    ptr = &valor;

    printf("\n******************\n");
    printf("Valor da variável: %d\n", valor);
    printf("Valor do ponteiro: %d\n", ptr);
    printf("Valor dentro do ponteiro: %d\n", *ptr);
}
