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
    printf("Endereço da variável na memória: %d\n", &valor);
    printf("Valor da variável dentro do ponteiro: %d\n", *ptr);
    printf("Endereço da variável dentro do ponteiro: %d\n", ptr);
    printf("Endereço do ponteiro na memória: %d\n", &ptr);
}
