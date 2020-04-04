#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, aux;

    printf("Digite um número para variável a: ");
    scanf("%d", &a);
    printf("Digite um número para variável b: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Valores invertidos:\na = %d\nb = %d\n", a, b);

    return 0;
}
