#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, resultado;

    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("Digite mais um número: ");
    scanf("%d", &c);

    resultado = (a - b) * c;

    printf("Resultado: %d\n", resultado);

    return 0;
}
